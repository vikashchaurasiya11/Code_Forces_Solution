#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long c=0;
    if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
    else{
      for(long long i=2;i*i<=n;i++){
        if(n%i==0) {
          c=n/i;
         break;
        }
      }
      if(c==0) cout<<1<<" "<<n-1<<endl;
      else cout<<c<<" "<<n-c<<endl;
    }
  }
  return 0;
}  