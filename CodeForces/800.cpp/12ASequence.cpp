#include <iostream>
#include <vector>
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
    vector<long> v;
    v.push_back(arr[0]);
    for(int i=1;i<n;i++){
      if(arr[i]<arr[i-1] && (arr[i-1]-arr[i])>0){
        v.push_back(arr[i]);
        v.push_back(arr[i]);
      }
      else v.push_back(arr[i]);
    }
    cout<<v.size()<<endl;
    for (int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
  }
}  