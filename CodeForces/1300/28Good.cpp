#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
 
  ll n;
  cin>>n;

  vector<pair<ll,ll>>a(n);
  vector<ll>pre(n+1);

  for (ll i=0;i<n;i++) {
    cin>>a[i].first;
    a[i].second=i+1;
  }

  sort(a.begin(),a.end());
  pre[0]=0;
  for (ll i=0;i<n;i++) {
    pre[i+1]=a[i].first+pre[i];
  }
  vector<ll> ans;
  if(pre[n-2]==a[n-2].first)  // if last second element is equal to pre of last 3rd element . (largest number of array gets deleted)
    ans.push_back(a[n-1].second);
  // we have to remove only one element
  for (ll i=0;i<n-1;i++) {
    if(pre[n-1]- a[i].first== a[n-1].first)  // if last second elemnt - any ele of array == last elemnt of array , it has to be removed
      ans.push_back(a[i].second);
  }

  cout<<ans.size()<<endl;
  for (ll i=0;i<ans.size();i++) {
    cout<<ans[i]<<" ";
  }
  cout<<endl;
    
  return 0;
}  


//  case ;
// Ex: 8 3 5 2
// sort= 2 3 5 8
// pre = 0 2 5 10 18

// ans=  last third of pre==last second of a, 5==5 (last element of a to be removed.) 2 + 3=5 (last elemnt hi agar remove karna ho to wo wala case)

// ans = 10(last second of pre)-2(every elemnt of array taraverse until satisfy)=8 

// always make sum such that it equals to the last element as it is the highest number in the array. (sabka sum usi ke barabar hoga)
