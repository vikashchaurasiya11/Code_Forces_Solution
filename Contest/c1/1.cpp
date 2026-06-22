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
    ll n,x,y,z;
    cin>>n>>x>>y>>z;

    
    ll ai=0;
    ll wai=0;

    // witout ai
    if(n%(x+y)==0) wai= n/(x+y);
    else wai= (n/(x+y)) +1;

    // with ai 
    if((n- (z*x)) % (x+ (10*y) )==0) ai= (n-(z*x))/(x+ (10*y)) +z; // +z for time in building ai
    else ai= (n-(z*x))/(x+ (10*y)) +1 +z;
    
    cout<<min(ai,wai)<<endl;
  }
  return 0;
}  