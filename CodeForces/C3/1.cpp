#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;

    int flag=0;
    int arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }

    map <int ,int> mp;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        mp[arr[i][j]]++;
      }
    }

    for(auto it: mp){
      if(it.second>n*(n-1)) flag=1;
    }

    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
  }
  return 0;
}  