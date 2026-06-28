#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    ll n,x1,x2,k;
    cin>>n>>x1>>x2>>k;

    if(n<=3)
    {
      cout<<1<<endl;
      continue;
    }

    ll d=abs(x1-x2);// d here is the difference 
    d=min(d,n-d);

    cout<<d+k<<endl;
  }

  return 0;
}

//  if (diff=n/2) 
//  it will remain at its position otherwise other person distance will get decrease in case of n/2 distance.