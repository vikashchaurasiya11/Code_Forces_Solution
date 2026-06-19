#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k,q;
    cin>>n>>k>>q;
    long long max=0;
    long long arr[n];
    for (long long  i=0;i<n;i++){
      cin>>arr[i];
    }
    int count=0;
    for (long long  i=0;i<n;i++){ 
      if(arr[i]<=q) count++;
      else{
        for(int i=1;i<=(count-k+1);i++){ // balance the equation
          max+=i;
        }
        count=0;
      }
    }
    for(int i=1;i<=(count-k+1);i++){
      max+=i;
    }
    cout<<max<<endl;
  }
  return 0;
}  