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
    ll n,m;
    cin>>n>>m;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<pair<ll,ll>> b(n);
    for (ll i=0;i<n;i++) {
      ll temp= a[i];
      ll cnt=0;
      while(temp%10==0){
        cnt++;
        temp/=10;
      }
      b[i].second=a[i];  // original value;
      b[i].first=cnt; // freq of trailing zero
    }

    sort(b.rbegin(),b.rend());

    ll digit=0;
    for (ll i=0;i<n;i+=2){
      digit+= (to_string(b[i].second).length() - b[i].first); // give the length of the integer by converting it to string.
    }

    for (ll i=1;i<n;i+=2){
      digit+= (to_string(b[i].second).length());
    }

    if(digit>m) cout<<"Sasha"<<endl;
    else cout<<"Anna"<<endl;

   }
  return 0;
}  