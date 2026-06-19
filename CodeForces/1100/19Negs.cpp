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

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    ll negc = 0;
    ll sum = 0;
    ll mn=1e9;
    for (long long i=0;i<n;i++){
      if(a[i]<0) negc++;
      sum += llabs(a[i]);
      mn= min(mn, llabs(a[i]));
    }

    if(negc % 2 ==0) cout<<sum<<endl;
    else {
      sum= sum- 2* mn;
      cout<<sum<<endl;
    }
    
  }
  return 0;
}  