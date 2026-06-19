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
    int max=0;
    int c=0;
    for (int i=0;i<n;i++){  
      if(arr[i]==0){ 
        c++;
        if(max<c) 
        max=c;     // max ko hamesha compare kar lo
      }
      else c=0;   // jab bhi 1 aayega to c=0
    }
    cout<<max<<endl;
  }
  return 0;
}  
