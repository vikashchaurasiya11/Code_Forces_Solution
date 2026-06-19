#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n,x;
      cin>>n>>x;
      int arr[n];
      for (int i =0;i<n;i++){
        cin>>arr[i];
      }
      int count=arr[0];
      if(n==1) {
        count=arr[0];
      }
      else {
        for (int i =0;i<n-1;i++){
          int c= arr[i+1]-arr[i];
          if(count<c){
            count=c;
          }
        }
      }
      if(count < (2*(x-arr[n-1]))){
          count=(2*(x-arr[n-1]));
        }
        cout<<count<<endl;
  }
    return 0;
}