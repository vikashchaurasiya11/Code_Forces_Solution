#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
#include <string>
using namespace std;
typedef long long ll;

ll f(string s){
  ll n=s.size(),c=0;
  for(ll i=0;i<n;i++){
    ll x=0;

    for(ll j=i;j<n;j++){
      x=(x*2+(s[j]-'0'))%3;

      if(x==0)c++;
    }
  }
  return c;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    string s(n,'0'),a=s;
    ll m=LLONG_MAX;

    if(f(s)<m){
      m=f(s);
      a=s;
    }

    for(ll i=0;i<n;i++){
      s[i]='1';

      ll x=f(s);
      if(x<m){
        m=x;
        a=s;

      }

      s[i]='0';
    }

    for(ll i=0;i<n;i++){
      for(ll j=i+1;j<n;j++){
        s[i]='1';

        s[j]='1';

        ll x=f(s);
        if(x<m){
          m=x;
          a=s;

        }

        s[i]='0';

        s[j]='0';
      }
    }

    for(ll i=0;i<n;i++){
      for(ll j=i+1;j<n;j++){

        for(ll k=j+1;k<n;k++){
          s[i]='1';

          s[j]='1';
          s[k]='1';


          ll x=f(s);
          if(x<m){
            m=x;
            a=s;
          }


          s[i]='0';
          s[j]='0';
          s[k]='0';


        }
      }
    }

    cout<<a<<endl;


    
  }
  return 0;
}