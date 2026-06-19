#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

vector <ll> v (vector <ll> &mx){
  vector <pair<ll,ll>> mx1(mx.size());
  for(int i=0;i<mx.size();i++){
    mx1[i].first = mx[i];
    mx1[i].second=i;
  }

  sort(mx1.rbegin(), mx1.rend());

  vector <ll> ans(3);
  for(int i=0;i<3;i++){
    ans[i]=mx1[i].second;
  }

  return ans;

}
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

    vector<long long>b(n);
    for (long long i=0;i<n;i++) {
      cin>>b[i];
    }

    vector<long long>c(n);
    for (long long i=0;i<n;i++) {
      cin>>c[i];
    }


    //  teeno ka 3-3 max nikal lenge aur  index check karenge ki alag alag ho , jab alaga alag index hoga aur teno ki valu uskpe mil jayega to use print kar denge . max ki value same ho sakti hai alag index pe sasme value jab hogi
    vector<long long>ma = v(a);
    vector<long long>mb = v(b);
    vector<long long>mc = v(c);

    ll res=0;
    for(int i=0;i<3;i++){   // saare 3 max ka check karenge kisme max ban raha hai , jo banega wo print
      for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
          ll x= ma[i], y= mb[j], z= mc[k];
          if((x==y) || (y==z) || (z==x)) continue; // all days should be distinct 
          res= max(res, a[x]+b[y]+c[z]);
        }
      }
    }

    cout<<res<<endl;
  }
  return 0; 
}  

// 3 max is liye bcz koi ek max niche wale max ko overhsdow kar sakta hai