#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k,a,b;
    cin>>n>>k>>a>>b;

    
    vector<pair<long long, long long>> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i].first >> v[i].second;
    }


    long long c=v[a-1].first;
    long long d=v[a-1].second;
    long long e=v[b-1].first;
    long long f=v[b-1].second;
    long long mn1=1e17; // min cost from a
    long long mn2=1e17; // min cost from b

    long long ans =llabs(c-e) + llabs(d-f);
    long long count =0;
    for(int i=0;i<k;i++){
      mn1= min(mn1,llabs(v[i].first -c) + llabs(v[i].second -d));
      
      mn2= min(mn2,llabs(v[i].first -e) + llabs(v[i].second -f));
      
    }

    ans = min(ans,mn1 +mn2);
     
    cout<<ans<<endl;

  }
  return 0;
}  