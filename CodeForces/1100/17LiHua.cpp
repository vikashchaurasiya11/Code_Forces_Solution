#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;

    int arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }

    int x;
    if(n%2==0) x=n/2;
    else x=n/2 +1;

    int count=0;
    for(int i=0;i<x;i++){
      for(int j=0;j<n;j++){
         if(i == n-1-i && j > n-1-j) continue; // for odd elements , it counted twice after reaching from mid to last
        if(arr[i][j] != arr[n-1 -i][n-1 -j] ) count ++;
      }
    }
    
    if(count>k) cout<<"NO"<<endl;
    else {
      k-=count;
      if(k%2==0 || n%2==1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
  return 0;
}  