#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long arr[n];
    for (long long i=0;i<n;i++){
      cin>>arr[i];
    }
    map<long long,long long>mp;
    for (long long i=0;i<n;i++){
      mp[arr[i]]++;
    }
    int highest=0;
    for(auto i: mp)
    if(i.second>highest) highest =i.second;
    long long op=0;
    while (highest <n){
      op++;
      if(2*highest <=n){
        op+=highest;
        highest*=2;
      }
      else {
        op+=n-highest;
        highest=n;
      }
    }
    cout<<op<<endl;  
  }
  return 0;
}  