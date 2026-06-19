#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;

    vector <pair<long long, long long>> v(n);
    for (long long i = 0; i < n; i++) {
      cin >> v[i].first;
      v[i].second=i;
    }

    sort(v.begin(),v.end());
    long long count=1; // to count operation from 1 because last element index is already added

    int mn=v[n-1].second;
    for (long long i = n-2; i >=0; i--) { // start from last second
      if(mn==0){
        break;
      }
      else if (v[i].second < mn){
        count++;
        mn=v[i].second;
      }
      else continue;
    }

    cout<<count<<endl; 

    // while(true){
    //   long long index =n; // to store index of max element
    //   long long mx=0; // to store max element from right

    //   if(index==0) break; // for index =0 it will break

    //   for(long long i=index-1;i>=0;i--){
    //     if(v[i]>mx){
    //       mx=v[i];
    //       index=i;
    //     }
    //   }
    //   count++;
    // }
  // cout<<count<<endl; 
  }
  return 0;
}  