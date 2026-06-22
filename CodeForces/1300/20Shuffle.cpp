#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,x,m;
    cin>>n>>x>>m;

    vector<vector<ll>> a(m, vector<ll>(2));


    for (ll i=0;i<m;i++){
      for (ll j=0;j<2;j++) {
        cin>>a[i][j];
      }
    }

    ll k=0;
    ll mn=x,mx=x;
    ll flag=0;

    for (ll i=0;i<m;i++){
      if(a[i][1]>=mn && a[i][0]<=mx){
        mn= min(mn,a[i][0]);
        mx= max(mx,a[i][1]);
      }
    }

    cout<<mx-mn+1<<endl;
  }
  return 0;
}  