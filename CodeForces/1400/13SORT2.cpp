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
    ll n,k;
    cin>>n>>k;

    vector<ll>a(n);
    vector<ll> b(n,0);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }
   
    for (ll i=0;i<n-1;i++) {
      if(a[i]<2*a[i+1]){
        b[i]=1;
      }
      else {
        b[i]=0;
      }
    }

    // if(2* a[n-1] > (a[n-2])){
    //   b[n-1]=1;
    // }
    // else b[n-1]=0;

    ll sum=0;

    for (ll i=0;i<n;i++){
      ll sx=0;
      while((i<n) && (b[i]==1)){
        i++;
        sx++;
      }

      if(sx>=k){
        sum+=(sx-(k-1));
      }
    }

    cout<<sum<<endl;
    
  }
  return 0;
}  