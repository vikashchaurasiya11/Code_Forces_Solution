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

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    map <ll, int>mp;

    for (ll i=0;i<n;i++) {
      if(a[i]==1) continue;
      for (ll j=2;j*j<=a[i];j++){
        if(a[i]<j) break;
        while(a[i]%j==0){
          mp[j]++;
          a[i]/=j;
        }
      }
      if (a[i] > 1) {
				mp[a[i]]++;
			}
    }

    int flag=0;
    for(auto x: mp){
      if(x.second % n !=0){
        flag=1;
        break;
      }
    }

    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
  }
  return 0;
}  