#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

ll gcd (ll a, ll b){
  while(b!=0){
    ll rem = b;
    b=a%b;
    a=rem;
  }
  return a;
}
int 
main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    ll ans1=0;
    for (long long i=0;i<n;i+=2) {
      ans1= gcd(ans1, a[i]);
    }
    
    ll ans2=0;
    for (long long i=1;i<n;i+=2) {
      ans2= gcd(ans2, a[i]);
    }

    
    int flag1=0;
    for (long long i=1;i<n;i+=2) {
      if(a[i] % ans1 ==0) {
        flag1=1;
        break;
      }
    }
    
    int flag2=0;
    for (long long i=0;i<n;i+=2) {
      if(a[i] % ans2 ==0) {
        flag2=1;
        break;
      }
    }
  
    if(flag1==0) cout<<ans1<<endl;
    else if (flag2==0)  cout<<ans2<<endl;
    else  cout<<0<<endl;
  }
  return 0;
}  