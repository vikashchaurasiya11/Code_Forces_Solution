// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <cmath>
// using namespace std;

// typedef long long ll;

// int main(){
//   int t;
//   cin>>t;

//   while(t--){
//     int n;
//     cin>>n;

//     vector<ll> a(n);
//     for(int i=0;i<n;i++){
//       cin>>a[i];
//     }

//     vector<ll> st;

//     for(int i=0;i<n;i++){
//       ll c=a[i];

//       while(!st.empty() && st.back()>c){ // if last elemnt of vector is greated than curr elemnt then it will udate the last value of vector with both of thein addition
//         c+=st.back();
//         st.pop_back();
//       }

//       st.push_back(c); // if a[i]>c then its value directly added here and next time it will take as the reference
//     }

//     // ll ans=0;
//     // for(int i=0;i< (int)st.size();i++){
//     //   ans=max(ans,st[i]);
//     // }
//     ll ans=st.back();

//     cout<<ans<<endl;
//   }




//   return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
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

    ll c=a[0];

    for (ll i=1;i<n;i++) {
      while(i<n && a[i]<c){
        c+=a[i];
        i++;
      }
      
      if(i<n) c=a[i];
    }

    cout<<c<<endl;
    
  }
  return 0;
}  