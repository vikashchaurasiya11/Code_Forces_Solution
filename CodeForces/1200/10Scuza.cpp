#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

int binS (vector<ll>&v , ll s, ll val){
  ll lo= 0, hi=s-1;
  ll ans=-1;
  while(lo<=hi){
    ll mid = lo+ (hi-lo)/2;

    if(v[mid]<=val){
      ans= mid;
      lo= mid+1;
    }
    else hi = mid-1;
  }
  return ans;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,q;
    cin>>n>>q;

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<long long>b(q);
    for (long long i=0;i<q;i++) {
      cin>>b[i];
    }

    vector<long long>bmx(n) , bsum(n); // size should be n

    ll sum=0;
    ll mx=0;
    for (long long i=0;i<n;i++) {
      sum+= a[i];
      bsum[i] = sum; // saara sum value store kar lenge
      mx= max(mx,a[i]); // saare max value store kar lenge us index se pahle tak ka
      bmx[i]= mx;
    }


    for (long long i=0;i<q;i++){
    ll res= binS(bmx, n, b[i]); // call lagayenge index mil jayega sabse badi value jo val se chhoti ho ya barabr ho uske index ka aur us index ka sum print kar denge
    if(res==-1) cout<<0<<" ";
    else cout<<bsum[res]<<" ";
    }
    cout<<endl;


  }
  return 0;
}  