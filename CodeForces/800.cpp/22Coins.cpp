#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    if(n%2==0 || k==1){
      cout<<"Yes"<<endl;
    }
    else{
      if((n-k)%2==0) cout<<"Yes"<<endl;
      else cout<<"NO"<<endl;
    }
    
  }
  return 0;
}  