#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    ll n,k;
    cin>>n>>k;

    ll ans=0;
    ll cost=1;

    while(n>0){
    
      ll total = cost*k;
      if(n>=total){
        ans+=k;
        n-=total;
      }
      else{
        ans+= n/cost;
        break;
      }
    
      cost*=2;
    }

    cout<<ans<<endl;
  }

  return 0;
}