#include <iostream>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n,k,x;
    cin>>n>>k>>x;
    long long sum=0;
    sum=((n*(n+1))/2)-((n-k)*(n-k+1))/2;
    if(sum<x) cout<<"NO"<<endl;
    else if(sum==x) cout<<"YES"<<endl;
    else if(sum>x){
      long long t=0;
      t=((k*(k+1))/2);
      if(t>x) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
  }
  return 0;
}  