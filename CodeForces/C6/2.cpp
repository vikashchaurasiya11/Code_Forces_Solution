#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

typedef long long ll;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    vector<ll>a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }

    vector<ll>b(n);
    for(int i=0;i<n;i++){
      cin>>b[i];
    }

    vector<ll> c=a;
    sort(c.begin(),c.end());

    bool flag=false;

    for(int i=0;i<n;i++){
      if(c[i]>b[i]){
        flag=true;
        break;
      }
    }

    if(flag){
      cout<<-1<<endl;
      continue;
    }

    vector<vector<int>> pos(n+1);

    for(int i=0;i<n;i++){
      int p=lower_bound(b.begin(),b.end(),a[i])-b.begin();
      pos[p].push_back(i);
    }

    priority_queue<int,vector<int>,greater<int>> pq;
    vector<int> p;

    for(int i=0;i<n;i++){
      for(auto x:pos[i]){

        pq.push(x);
      }

      p.push_back(pq.top());
      pq.pop();
    }

    ll ans=0;

    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(p[i]>p[j]){
          ans++;
        }
      }
    }

    cout<<ans<<endl;
  }

  return 0;
}