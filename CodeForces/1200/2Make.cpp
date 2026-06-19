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
    long long n;
    cin>>n;

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    ll k=1;
    for(int i=1;i<=60;i++){ // 2 ka power 60 tak
      k= k*2; // usme hi answer aayega 
      map <ll , ll> mp; 
      for (long long j=0;j<n;j++){
        mp[a[j] % k]++;
      }
      if(mp.size()==2) break; // jab size 2 hoga to break.
    } 
    cout<<k<<endl;

  }
  return 0;
}  

// 2 ki power me hamesha 2 hi distinct value aayega!!