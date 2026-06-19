#include <iostream>
#include <climits>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long arr[n];
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]) flag=1;
    }
    if(flag==0){
      int min=INT_MAX;
      for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]<min) min=arr[i+1]-arr[i];
      }
      cout<<min/2 +1<<endl;
    }
    else cout<<0<<endl;
  }
}  