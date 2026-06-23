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
    ll n;
    cin>>n;

    
    if(isPrime(n)){
      cout<<"NO"<<endl;
      continue;
    }
    else{

      vector<ll> ans;
      ll flag=0;
      for(ll i=2;i*i<=n; i++){
        if(n%i==0) {
          ans.push_back(i);
          n/=i;  // n will get updated, remaining n at the end of this loop is the value of the c if it satisfy the constraints.
          if(ans.size()==2) break;
        }
      }

      if(ans.size()==1) cout<<"NO"<<endl;
      else{
        if(n>1 && (n != ans[0]) && n!= ans[1]){ // this condn must hold true.
          cout<<"YES"<<endl;
          cout<<ans[0]<<" "<<ans[1]<<" "<<n<<endl;
        }
        else cout<<"NO"<<endl;
      }

    }

    
  }
  return 0;
}  