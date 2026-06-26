#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  
  string s;
  cin>>s;
  ll n= s.length();

  // if(n==1) cout<<s<<endl;

  // else if(n==2) { // whn n==2
  //   if(s[0]!=s[1]) cout<<s<<endl;
  //   else {
  //     for(ll j=97; j<=122;j++){
  //       if((s[1]!= (char)j)){
  //         s[1]=char(j);
  //         break;
  //       }
  //     }
  //     cout<<s<<endl;
  //   }
  // }

  // else{
    for (ll i=1;i<n-1;i++) { // check for entire array
      if(s[i]==s[i-1]) {
        for(ll j=97; j<=122;j++){
          if((s[i]!= (char)j) && (s[i+1]!= (char)j)){
            s[i]=char(j);
            break;
          }
        }
      }
    }

    if(s[n-1]==s[n-2]) { // check for last two character
      for(ll j=97; j<=122;j++){
        if((s[n-1]!= (char)j)){
          s[n-1]=char(j);
          break;
        }
      }
    }

    cout<<s<<endl;
  // }

  return 0;
}  