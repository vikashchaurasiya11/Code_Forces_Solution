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

    vector<ll>a;

    
    for (ll j=1,k=n;j<=k;j++,k--){
      a.push_back(j);
      a.push_back(k);
    }
    

    reverse(a.begin(),a.end());
    if(n%2==0){
      for (ll i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
    else{
       for (ll i=1;i<a.size();i++) {
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
    
  }
  return 0;
}
