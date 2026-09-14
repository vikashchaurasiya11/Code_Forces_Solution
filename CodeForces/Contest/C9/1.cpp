#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    if(n==1){
      cout<<"YES"<<endl;
    } 


    else{
      vector<ll>b(n+1);
      for (ll i=0;i<n;i++) {
        b[i+1]=a[i];
      }

      vector<ll>c;
      for (ll i=0;i<n;i++){
        if(a[i]!=i+1){
          c.push_back(i+1);
        }
      }

      bool flag=true;
      for (ll i=0;i<c.size();i++){
        if(b[c[i]]!=c[c.size()-1-i] ){ // first wrong elemnt == index of last elemen, 2nd== last second, 3rd == last third.
          flag=false;
          break;
        }
      }

      
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }

  }
  return 0;
}  