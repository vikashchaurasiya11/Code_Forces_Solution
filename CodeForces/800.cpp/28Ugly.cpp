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
    int sum=0;
    int flag=0;
    if(arr[0]==arr[n-1]) cout<<"NO"<<endl; // when all elements are same. elements are aranged in ascending order
    else {
      for (int i=0;i<n-1;i++){
        sum=sum+arr[i];
        if(sum==arr[i+1]) {
          int temp=arr[i]; //always swap with last element
          arr[i]=arr[n-1];
          arr[n-1]=temp;
          sum=sum-arr[i]+arr[n-1-i]; //subtract arr[i] and add the last element which swapped.
        }
      }
      cout<<"YES"<<endl;
      for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}  