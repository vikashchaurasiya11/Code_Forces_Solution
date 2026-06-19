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
    ll n;
    cin>>n;

    // for two (1 for node and 6 for minimum graph)
    // for three (1 for node and 3*4 for minimum graph)
     // for four (1 for node and 4*5 for minimum graph)

    // value of k can be anything

    ll k=n-1;

    int flag=0;
    for(int i=2;i<1000;i++){
      k-=i*(i+1);

      if(k==0 || flag==1) {
        flag=1;
        break;
      }

      else{
        ll p=i*i;
        ll ans=k;

        for(int j=3;p<=1e6;j++){
          p*=i;
          ans-=p;
          if(ans==0){
            flag=1;
            break;
          }
          else if(ans<0){
            k=n-1; // wapas update kar do
            break;
          }
          else{
            continue;
          }


        }
      }
    }
 
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}  