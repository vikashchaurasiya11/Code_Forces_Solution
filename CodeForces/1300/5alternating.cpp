#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

#define MOD 998244353

ll fact (ll n){
  ll p=1;
  for(int i=1;i<=n;i++){
    p=(p*i)%MOD;
  }
  return p;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n= s.length();

    int count=0;
    int len =1;
    ll k=1;

    for(ll i=1;i<n;i++){
      if(s[i]==s[i-1]){
        count++;
        len ++;
      }

      else {
        k*=len;
        k%=MOD;

        len=1;
      }
    }

    k*=len;
    k%=MOD;

    k=(k*(fact(count)))%MOD;

    
    
    cout<<count<<" "<<k<<endl;
  }
  return 0;
}  