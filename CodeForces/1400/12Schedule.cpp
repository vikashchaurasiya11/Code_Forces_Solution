#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
vector <int> fr;

bool check (int a, int b, int t){
  ll mx=0;
  for(int i=1;i<=b;i++){
    if(t<fr[i]) mx+=t; // time kam hua to fr[i] task hi ho payenge
    else mx+= fr[i] + (t- fr[i])/2; // jitne task reh jayenge unhe div by 2 karne pe total naye task jo ho payenge unka ans aa jayega
  }
  return mx>=a; // m se bada huwa total task to ye karna possible haui, to true return hoga.
}
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    fr.assign(n+1,0);

    vector<ll>a(m);
    for (ll i=1;i<=m;i++) {
      int temp;
      cin>>temp;
      fr[temp]++;
    }

    int low=0, hi=2*m; // hi =2*m , max time for complete work to get execute. we have to find the min of all.

    while(low<hi){
      int mid= (low+hi)/2;
    
      if(check(m,n,mid)){
        hi=mid; // agr true hua to kam time me karne ka try karenge
      }
      else low = mid+1; //false hua to time badhayenge
    }
    cout<<low<<endl;

  }
  return 0;
}  