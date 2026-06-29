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
    int n;
    cin>>n;
    
    vector<ll>p(n+1);
    vector<ll>d(n+1,0);
    
    d[1]=0;
    for(int i=2;i<=n;++i){
      cin>>p[i];
      int u=p[i];
      int v=d[u]+1;
      d[i]=v;
    }
    
    vector<ll>m(n+1,0);

    for(int i=1;i<=n;++i){
      int h=d[i];
      m[i]=h;
    }

    vector<ll>y(n+1,-1);
    vector<ll>x(n+1,-1);
    
    for(int i=n;i>=2;--i){
      int u=p[i];
      int v=m[i];
      
      int c=m[u];
      if(v>c) {
        m[u]=v;
      } 
      else m[u]=c;
      
      if(v>x[u]) {
        int z=x[u];
        y[u]=z;
        x[u]=v;

      }
      else if(v>y[u])  y[u]=v;

      else continue;
    }
    
    long long g=0;
    g=g+n;

    for(int i=1;i<=n;++i){
      int s=y[i];
      if(s!=-1){
        int b= d[i];
        int k=s-b;
        g=g+k;
      }
      
    }
      
    cout<<g<<endl;

    }
    
    return 0;
}