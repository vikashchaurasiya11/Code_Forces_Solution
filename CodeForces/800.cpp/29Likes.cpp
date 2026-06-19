#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long arr[n];
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    int k=0;
    for (int i=0;i<n-1;i++){
      if ((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 &&arr[i+1]%2==0)){
        continue;
      }
      else k++;
    }
    cout<<k<<endl;
  }
  return 0;
}  