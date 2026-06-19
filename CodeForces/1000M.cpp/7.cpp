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
    ll a,b,x;
    cin>>a>>b>>x;

    ll c= max(a,b);
    ll d= min(a,b);

    ll count=0;
    ll ans=1e18;

    while(c!=d){

      ans= min(ans,llabs(c-d)+count); // after each iteration count will be added and difference will decrease.
      
      count++;
      if(c>d) c/=x;
      else d/=x;
      
    }

    cout<<min(count,ans)<<endl;
      
  }
  return 0;
}  