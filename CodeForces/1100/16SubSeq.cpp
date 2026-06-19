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
    long long n;
    cin>>n;

    vector<long long> c(n);
    for (long long i=0;i<n;i++) {
      cin>>c[i];
    }

    sort(c.begin(),c.end());

    if(c[0]!=1) {
      cout<<"NO"<<endl;
      continue;
    }
    // prefix sum
     vector<long long> v(n);
     long long sum=0;
    for (long long i=0;i<n;i++) {
      sum+=c[i];
      v[i] =sum ;
    }

    int flag=1;
    for (long long i=1;i<n;i++){
      if(v[i-1]<c[i]) flag=0;
    }
    
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

  }
  return 0;
}  