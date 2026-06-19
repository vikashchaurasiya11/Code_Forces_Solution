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
    long long n,k;
    cin>>n>>k;

    int flag=0;
    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }
    map <ll,ll> mp;
    for (long long i=0;i<n;i++) {
      mp[a[i]]++;
    }
    
    for (auto it : mp) {
      if(mp.find(it.first - k) != mp.end() ){
        flag=1;
        break;
      }
    }
     if(flag==1) cout<<"YES"<<endl;
     else  cout<<"NO"<<endl;


  }
  return 0;
}  