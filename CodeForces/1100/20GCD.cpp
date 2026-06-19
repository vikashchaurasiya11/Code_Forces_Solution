#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
long long gcd (long long a, long long b){
  while (b!=0){
    long long rem= b;
    b=a%b;
    a=rem;
  }
  return a;
}

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

    long long mx=0,sumt=0;
    for (long long i=0;i<n;i++){
      sumt+=a[i]; // sum of all elements
    }

    ll sum=0;
    ll ans=0;
    ll mgcd=0;
    for (long long i=0;i<n-1;i++){ // at i=n-1 , sumt-sum=0
      // gcd(x,0) =x // isiliye ek kam iterate karo
      sum+=a[i];
      ans= gcd(sumt-sum,sum);
      mgcd= max(mgcd,ans);
    }
    
    cout<<mgcd<<endl;
  }
  return 0;
}  