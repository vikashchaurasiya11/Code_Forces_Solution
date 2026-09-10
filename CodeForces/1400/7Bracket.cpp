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
    string s;
    cin>>s;

    vector<ll>a;
    vector<ll>b;

    ll c=0;
    for (ll i=0;i<n;i++) {
      if(s[i]=='(') c++;
      a.push_back(c);
    }

    ll d=0;
    for (ll i=0;i<n;i++) {
      if(s[i]==')') d++;
      b.push_back(d);
    }

    vector<ll>f;
    bool flag=0; // ckeck for negative
    bool flag1=0; // check for positive
    for (ll i=0;i<n;i++) {
      ll diff=a[i]-b[i];
      if(diff<0) flag=1;
      if(diff>0) flag1=1;
      f.push_back(diff);
    }

    if(f[n-1]!=0) cout<<-1<<endl;
    else{
      if((flag1==1) && flag==1){
        cout<<2<<endl;
        for (ll i=0;i<n;i++){
          if(f[i]>0) cout<<1<<" ";
          else if(f[i]<0) cout<<2<<" ";
          else {
            if(f[i-1]<0) cout<<2<<" ";
            else cout<<1<<" ";
          }
        }
        cout<<endl;
      }
      else{
        cout<<1<<endl;
        for (ll i=0;i<n;i++){
          cout<<1<<" ";
        }
        cout<<endl;
      }
    }
  }
  return 0;
}  

