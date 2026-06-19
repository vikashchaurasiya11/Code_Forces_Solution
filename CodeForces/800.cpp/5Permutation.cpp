#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    for (int j=0;j<n;j++){
      for (int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
          int temp= arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
        }
      }
    }
    int c=0;
    for (int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        c=1;
      }
    }
    if(c==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}