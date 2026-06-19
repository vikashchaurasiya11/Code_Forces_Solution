#include <iostream>
#include <climits>
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
    vector<long>v;
    vector<long>w;
    int min=INT_MAX;
    int flag=0;
    for (int i=0;i<n-1;i++){
      if(arr[i]!=arr[i+1]) flag=1;
    }
    for (int i=0;i<n;i++){
      if (arr[i]<min){
        min=arr[i];
      }
    }
    for (int i=0;i<n;i++){
      if(arr[i]==min) v.push_back(min);
      else w.push_back(arr[i]);
    }
    if (flag==0)
    {
      cout<<-1<<endl;
    }
    else {
      cout<<v.size()<<" "<<w.size()<<endl;
      for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
      for (int i=0;i<w.size();i++){
        cout<<w[i]<<" ";
      }
      cout<<endl;
    }
    
  }
}  