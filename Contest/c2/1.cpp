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
    ll n;
    cin>>n;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    sort(a.rbegin(),a.rend());

    int flag=0;
    for (ll i=0;i<n-1;i++) {
      ll md= a[i]%a[i+1];
      if(i+2<n && a[i+2]!=md){
        flag=1;
        break;
      }
    }
    if(flag==1) cout<<-1<<endl;
    else cout<<a[0]<<" "<<a[1]<<endl;
  
  }
  return 0;
}  