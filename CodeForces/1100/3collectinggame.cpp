#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    vector<pair<long long,int>> c(n);

    for(int i=0;i<n;i++){
      cin>>c[i].first;
      c[i].second=i;
    }

    sort(c.begin(),c.end());

    vector<long long> pref(n);
    pref[0]=c[0].first;

    for(int i=1;i<n;i++)
      pref[i]=pref[i-1]+c[i].first;

    vector<int> reach(n);
    reach[n-1]=n-1;

    for(int i=n-2;i>=0;i--){
      if(pref[i]>=c[i+1].first)
        reach[i]=reach[i+1];
      else
        reach[i]=i;
    }

    vector<int> ans(n);

    for(int i=0;i<n;i++){
      ans[c[i].second]=reach[i];
    }

    for(int i=0;i<n;i++)
      cout<<ans[i]<<" ";

    cout<<endl;
  }
}