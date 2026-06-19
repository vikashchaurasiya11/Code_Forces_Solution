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
    ll n,k;
    cin>>n>>k;

    vector<ll>a(n);
    vector<ll>bit(32); // every index hold the freq. of bits '1' in that particular location of all elemnts
    int ans= INT_MAX; // max ans value;
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      ans&=a[i]; // and of all elements;in beggining all the bits whose all value are one
      for (ll j=0;j<32;j++){
        if(a[i]& (1<<j)){
          bit[j]++; // har location ki '1' ki freq mil jayegi pure elemnt ki (1<<j) har bit ki location 1 karke element m us bit ki postion milega 
        }
      }
    }

    // now take OR
    for (ll i=30;i>=0;i--){ // traverse bit
      if(k>=n-bit[i]){ // no of operation > = no of zeros in that location
        ans |= (1<<i); // bits will increase value when satisfy the condition
        k-= (n-bit[i]); // subtract used operation
      }
     
    }

    cout<<ans<<endl;

    
  }
  return 0;
}  