#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,K;
    cin>>n>>K;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[i]==K){
        flag=1;
        break;
      }
    }
    if(flag) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    
  }
}  

