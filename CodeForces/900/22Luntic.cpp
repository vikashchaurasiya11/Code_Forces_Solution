#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    int c=0,b=0;
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    long long sum=0;
    for (int i=0;i<n;i++){
      sum+=arr[i];
      if(arr[i]==0) c++;
      else if(arr[i]==1) b++;
      else continue;
    }
    long long f=1;
    for(int i=0;i<c;i++){
      f*=2;
    }
     cout<<f*b<<endl; 
    
  }
  return 0;
}  