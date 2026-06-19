#include <iostream>
using namespace std;
int main() {
   int t;
   int sum=0;
    cin >> t;   
    if(t>0 && t<10001){              // number of test cases
    for(int l=0;l<t;l++) {
      int n;
      cin>>n;
      sum=sum+n;
      if(sum<200001){
      int arr[n];
      for (int k=0;k<n;k++){
        cin>>arr[k];
       }
      for (int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
          for (int k=j+1;k<n;k++){
            
if (((arr[j]%2==0 && arr[k]%2!=0) || (arr[j]%2!=0 && arr[k]%2==0)) && arr[j]>arr[k]){
int temp = arr[j];
arr[j]=arr[k];
arr[k]= temp ;
          }
        
        }
        }
       }
    for (int k=0;k<n;k++){
        cout<<arr[k]<<" ";
        }
}
      
    
   }
  }
    
    return 0;
  
}
