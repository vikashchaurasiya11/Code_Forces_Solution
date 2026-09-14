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
    ll n,x,y;
    cin>>n>>x>>y;

    ll odd=0;
    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      if(a[i]%2!=0) odd++;
    }

   
    // if starting of alice(x)in odd , for bob (x+3)  it should be even and vive versa
     // for alice
    ll lalice,lbob;
    if(x%2==0){
      if(odd%2==0) {
        lalice=0; // 0 for even (last of alice)
        lbob=1; // 1 for odd (last of bob)
      }
      else{ 
        lalice=1;
        lbob=0;
      }
    }
    else {
      if(odd%2==0) {
        lalice=1;
        lbob=0;
      }
      else {
        lalice=0;
        lbob=1;
      }
    }

    ll flag=0;
    if(y%2==0){
      flag=0;
    }
    else flag=1;

    if(flag==lalice) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;

  }
  return 0;
}  