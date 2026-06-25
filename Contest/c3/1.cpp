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

    ll a=1;
    for (ll i=0;i<n;i++) {
      cout<<a<<" ";
      a+=2;
    }
    cout<<endl;


    
  }
  return 0;
}  