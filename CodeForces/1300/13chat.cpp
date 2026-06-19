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
    ll k,x;
    cin>>k>>x;

    if(x>=((k*(k+1))/2)+((k-1)*(k)/2)) cout<<(2*k-1)<<endl;
    else{
      ll l=1,h=2*k-1;
      int flag=0;

      while(l<=h){
        ll mid= l + (h-l)/2;
        ll sum ;

        if(mid <= k)
         sum = mid*(mid+1)/2;
        else{  
          ll rem =(2*k-1-mid);
          sum = k*k - rem*(rem+1)/2;
        } // find the sum at every index
        // (2*k-mid) when mid cross the k. iske hisab se calculate kar do

        if(sum>=x) h=mid-1;
        else  l=mid+1;
      }

      cout<<h+1<<endl;
    }
  }
  return 0;
}  