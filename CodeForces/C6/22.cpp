#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    vector<pair<ll,ll>> a(n);

    for(int i=0;i<n;i++){
      cin>>a[i].first;
      a[i].second=i;
    }

    vector<ll> b(n);

    for(int i=0;i<n;i++){
      cin>>b[i];
    }

    vector<pair<ll,ll>> c=a;
    sort(c.begin(),c.end());

    bool flag=false;

    for(int i=0;i<n;i++){
      if(c[i].first>b[i]){
        flag=true;
        break;
      }
    }

    if(flag){
      cout<<-1<<endl;
      continue;
    }

    vector<ll> pos(n);

    for(int i=0;i<n;i++){
      pos[c[i].second]=i;
    }

    ll ans=0;

    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(pos[i]>pos[j]){
          ans++;
        }
      }
    }

    cout<<ans<<endl;
  }

  return 0;
}