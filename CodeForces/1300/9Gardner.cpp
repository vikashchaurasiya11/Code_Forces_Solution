#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    vector<vector<ll>> a;
    map<ll,ll>mp;

    for (ll i=0;i<n;i++) {
      int z;
      cin>>z;
      vector<ll> temp(z);
      for (ll j=0;j<z;j++) {
        cin>>temp[j];
        mp[temp[j]]++; //har location ki frequency count kar lenge
      }
      a.push_back(temp); // saare bit position aa jayenge 2D arrray me
    }


    string ans ="NO";
    for (ll i=0;i<n;i++){
      bool flag=1;
      for(auto it: a[i]){ 
        if(mp[it]==1){ // if any element frequncy is 1 in that array, to wo discard ho jayega
          flag=0;
          break;
        }
      }
      
      if(flag==1){ // agr saare element repeat honge to yes ho jayega
        ans ="YES";
        break;
      }
    }
    cout<<ans<<endl;

    
  }
  return 0;
}  

// a=repeated wala array + reamaing saare
// b= reamaing saare exclude repeated (to b me bhi saare element aa jayenge kyuki wo sab already a me the )

//EX: a sequence=1,2,3,4 b sequence= 2,3,4

// element in subsequence:
// a=1,2,4,5,6
// b=1,2,4,5,6
// saare same element ho jayenge to OR same aayeaga.
