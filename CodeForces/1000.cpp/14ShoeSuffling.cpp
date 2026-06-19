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
    map <int,int> mp;
    vector <int> v;
    long long arr[n];
    for (long long  i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
    }
     for(auto x:mp){
       if(x.second<2) flag=1; //agr koi number ki freq one hogi to wo pair nhi bana pauyega becz pair should be eqal or max aur ye tabhi possible haijab number identical ho
    }
    if(flag==1) cout<<-1<<endl;
    else{
      int j=0;
      for (long long  i=1;i<n;i++){
        if (arr[i]==arr[j]){
          v.push_back(i+1); // jab tak equal hau uske aage wala push kar do
        }
        else { //(j+1) to balance the index
          v.push_back(j+1); // last me j ki intial value push kar do 
          j=i; //j ko current i se initialize kar do
        }
      }
      v.push_back(j+1); // last wale number ko recnt j se kar do
      for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}  
