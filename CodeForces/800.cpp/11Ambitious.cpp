#include <iostream>
#include <climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  int min=INT_MAX;
  for (int i=0;i<n;i++){
    if(arr[i]==0) min=0;
    else if(arr[i]>0 && arr[i]<min) min= arr[i];
    else if(arr[i]<0 && -arr[i]<min) min=-arr[i];
    else continue;
  }
  cout<<min<<endl;
}  