#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPrime(int n){
  int flag=0;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0) {
      flag=1;
      break;
    }
  }
  if(flag==0) return true;
  else return false;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    ll a,b;

    if(n%2==0){
      a=n/2;
      b=a; 
    }
    else if(isPrime(n)){
      a=1;
      b=n-1;
    }

    else{
      
      for(ll i=2;i*i<=n;i++){
        if((n)%i==0){
          a=n/i; // this will also divide n
          b=n-a; // subtracting the value from N will give a number which also get divided from the a; bcz a is a multiple of n
          break;
        }
      }
    }

    cout<<a<<" "<<b<<endl;
  }
  return 0;
}  