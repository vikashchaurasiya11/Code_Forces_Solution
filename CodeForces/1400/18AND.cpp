#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    vector<ll>a(n);
    
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    ll tand= a[0]; // AND of entire array
    for (ll i=0;i<n;i++) {
      tand &= a[i];
    }

    ll fact=1; // permutation ka total elemnts in middle , pahla aur akhiri elemnt ko chhod ke baaki sab (n-2)! ka permutation.
    for (ll i=1;i<=n-2;i++) {
      fact *= (1LL* i);
      fact= fact % MOD;
    }
    
    ll cnt=0; // to find total element in the array which are equal to total AND of entire array. (start aur last me use rakh denge to suffix = prefix ho jayega uska total AND)
    for (ll i=0;i<n;i++) {
      if(a[i]== tand) cnt++;
    }

    if(cnt<=1) cout<<0<<endl; // Total AND bas ek baar aaya ya fir 0 baar aaya hai to fir uska Permutation Zero hoga
    else {
      cout<< 1LL * (((( cnt*(cnt-1)) %MOD) * fact) % MOD) <<endl;// begining and last elemnt should be same elemnt (whose AND are equals = AND of entire of array) , uska AND kisi ke bhib sath lene pe hamesha wahi AND aayega, (AND of prefx= suffix)
    }

  }
  return 0;
}  