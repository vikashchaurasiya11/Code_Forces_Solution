#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPrime(ll a){
  if (a<2) return false;
  for(ll i=2;i*i<=a; i++){
    if(a%i ==0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;

    

    if(n<=k) cout<<1<<endl;
    else if(isPrime(n) || k==1){
      cout<<n<<endl;
    }
    else {
      ll ans =n;// max value itni hi hogi
      // saare possible divisor dhudenge jo "k" se chhote ho , usme se sabse chhoti value answer hogi

      for(ll i=1;i*i<=n;i++){ // min value of i will get selected
        if(n%i==0){
          if(n/i<=k){ // agr n/i bhi chhota hoga k se tabhi us i ko lenge
            ans=min(ans,i);// if i==2 then and n=500 then i means 250 package wale (i=2) lenge (quntitity kam hai package ki)
          }
          
          if(i<=k){ 
            ans=min(ans,n/i); //  if i==2 then and n=500 then n/i means 2 package wale (n/i= 250 )lenge (quntitity jada hai package ki)
          }
        }
        // hame kam wala package return karna hai
      }
      cout<<ans<<endl;
    }
    
  }
  return 0;
}  


// 