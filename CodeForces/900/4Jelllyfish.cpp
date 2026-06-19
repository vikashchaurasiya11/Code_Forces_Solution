#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,n;
    cin>>a>>b>>n;
    int arr[n];
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    long long sum=b;
     // intial state se ek kam hoga
    for (long long i=0;i<n;i++){
      if(arr[i]>=a) sum+=a-1; // jab a se jada hoga to a add hoga
      else sum+=arr[i]; // given time edd hoga jab a se kam hoga tab
    }
    cout<<sum<<endl;
  }
  return 0;
}  

