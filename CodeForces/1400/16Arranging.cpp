#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
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

    ll ship=0;
    for (ll i=0;i<n;i++) {
      if(s[i]== '*') ship++;
    }

    ll idx= ship/2;

    ll ind= -1; // location of middle ship
    
    for (ll i=0;i<n;i++) { 
      if(s[i]=='*') idx--;
      if(idx<0){
        ind=i;
        break;
      }
    }

    ll cnt=0; // to count the left from the middle
    ll sum=0;
    for (ll j=ind-1;j>=0;j--) { // 
      if(s[j]== '.') {
        cnt++;
      }
      else{
        sum+=cnt; // total ship distance at the left
      }
    }

    ll ct=0; // to count from the right
    for (ll j=ind+1;j<n;j++) {
      if(s[j]== '.') {
        ct++;
      }
      else{
        sum+=ct; // jab bhi ship milegi to total distance add ho jayega.
      }
    }

    cout<<sum<<endl;
  }
  return 0;
}  