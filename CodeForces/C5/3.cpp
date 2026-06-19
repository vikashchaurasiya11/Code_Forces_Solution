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
    ll p,q;
    cin>>p>>q;

    ll c = p + 2*q;

    if(c==4) cout<<1<<" "<<1<<endl;
    else if (c==7) cout<<2<<" "<<1<<endl;
    else if(c<7) cout<<-1<<endl;
    else{
      c-=7;
      int ct=0;
      
      int flag=0;
      int d;
      int f=1;
      for(int i=5;i*i<=c; i+=2){
        if(c%i==0) {
          flag=1;
          d=i;
          break;
        }
        else{
          c-=2*i;
          f++;
        }
      }

      if(flag==1) cout<<d/2<<" "<<c/d + f <<endl;
      else cout<<-1<<endl;

    }

    
  }
  return 0;
}  