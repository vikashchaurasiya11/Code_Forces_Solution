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

    if(n==1) cout<<0<<endl;
    else {
      ll sum1=0, sum2=0;
      ll i=0, j=n-1;
      ll count=0;
      ll mxcount=0;
      while(i<=j) {

        if(sum1>=sum2){
          sum2+= a[j];
          count++;
          j--;

        }
        else {
          sum1+=a[i];
          count++;
          i++;
        }

        if(sum1==sum2){
          mxcount= count;
        }
      }
      cout<<mxcount<<endl;
    }
  }
  return 0;
}  