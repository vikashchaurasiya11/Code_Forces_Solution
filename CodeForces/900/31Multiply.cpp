#include <iostream>
using namespace std;
#include <vector>
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    int op=0;
    while(n!=1){
      if(n%6==0){
        n/=6;
        op++;
      }
      else if(n%3==0){
        n*=2;
        op++;
      }
      else{
        op=-1;
        break;
      }
    }
    cout<<op<<endl;
  }
  return 0;
}  