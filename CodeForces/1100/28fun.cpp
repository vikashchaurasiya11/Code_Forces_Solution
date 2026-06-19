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

    ll i=n-1; // last element ke equal hi sab banenge 
    ll ans =0;
    while(i>=0 && a[i]== a[n-1] ){ // jab tk last elemnt same hai unka location find karo
        i--;
    }
    if(i==-1){
      cout<<0<<endl;
    }
    else{
      while(i>=0){
        i-= (n-1-i); // 2x me decrease hoga i 
        ans++; 
        while(i>=0 && a[i]== a[n-1]){ // agr us region ke baad bhi last value kahi common milti hai to use bhi include kar lenge
          i--;
        }
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}  

/*

agr i ke RHS me 5 elemnt hai to i ,5 se pichhe hat jayega,
5*2 = 10  elemnts cover ho chuka hoga , 
intially 
16 elemnts , i=10
i= (n-1)-i // 5 
i- = (n-1)-i // i= 5 (kyuki biche ke saare elemnt 2 ke multiple me civer kar lenge)

*/