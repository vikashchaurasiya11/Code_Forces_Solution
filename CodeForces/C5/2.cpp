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
    long long n,m;
    cin>>n>>m;

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    int l=0;
    int flag=0;
    while(l<n){
      int z= a[l];
      int freq=1;
      int k=l;

      for(int i=l+1;i<n;i++){
        if(a[i]==z) {
          freq++;
          k=i;
        }
        else{
          break;
        }
      }


      if(freq>=m)  flag=1;
      if(flag==1) break;
      l=k+1;
    }

    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  return 0;
}  