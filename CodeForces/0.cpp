#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    vector<ll>a(n),b;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }

    b=a;
    sort(b.begin(),b.end());

    ll k=-1;
    bool ok=true;

    for(int i=0;i<n;i++)
    {
      ll d=b[i]-a[i];

      if(d<0)
      {
        ok=false;
        break;
      }

      if(d>0)
      {
        if(k==-1)
        {
          k=d;
        }
        else if(k!=d)
        {
          ok=false;
          break;
        }
      }
    }

    if(ok)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }

  return 0;
}