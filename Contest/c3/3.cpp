#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++) {
      cin>>a[i];
    }

    map<int,ll>sum;
    map<int,int>cnt;

    for(int x:a) {
      map<int,int>vis;

      int cur=x;
      int d=0;

      while(!vis[cur]) {
        vis[cur]=1;
        sum[cur]+=d;
        cnt[cur]++;

        if(cur%2) {
          cur++;
        }
        else {
          cur/=2;
        }

        d++;
      }
    }

    ll ans=(1LL<<60);

    for(auto it:cnt) {
      if(it.second==n) {
        ans=min(ans,sum[it.first]);
      }
    }

    cout<<ans<<endl;
  }

  return 0;
}