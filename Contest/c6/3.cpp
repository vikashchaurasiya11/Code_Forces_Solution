// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <cmath>
// #include <map>
// using namespace std;
// typedef long long ll;

// int main()
// {
//   int t;
//   cin>>t;

//   while(t--)
//   {
//     ll n;
//     cin>>n;

//     vector<ll>a(n),b;

//     for(ll i=0;i<n;i++)
//       cin>>a[i];

//     b=a;
//     sort(b.begin(),b.end());

//     ll ans=-1;

//     for(ll i=0;i<n;i++)
//     {
//       if(a[i]==b[i])
//         continue;

//       ll cur=max(a[i]-b[0],b[n-1]-a[i]);

//       if(ans==-1)
//         ans=cur;
//       else
//         ans=min(ans,cur);
//     }

//     cout<<ans<<endl;
//   }

//   return 0;
// }

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

    
  }
  return 0;
}  