#include <iostream>
using namespace std;
#include <vector>
#include<climits>
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for (long long  i=0;i<n;i++){
      cin>>arr[i];
    }
    int even=0;
    int min=INT_MAX;
    for (long long  i=0;i<n;i++){
    if(arr[i]%2==0) even++;
     if(arr[i]%k ==0) {
      min=0;
      break;
     }
     else {
      if(k-arr[i]%k <min) min=k-arr[i]%k;
     }
    }
    if(k==4){
      if(even >=2) min=0;
      else if(even==1) {
        if(min<1) min=0;
        else min=1;
      }
      else {
        if(min<2) min=1;
        else min=2;
      }
    }
    cout<<min<<endl;
    
  }
  return 0;
}  