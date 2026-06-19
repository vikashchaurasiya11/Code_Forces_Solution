#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,W;
    cin>>n>>W;

    vector<ll>a(n);
    vector<ll>bit(21,0);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      ll lg= log2(a[i]);
      bit[lg]++;
    }

    ll count=0;
    ll box_used=0;
    
    while(box_used<n){
      ll temp =W;
      for(int i=20;i>=0;i--){
        while(bit[i]>0 && (1<<i)<=temp ){
          temp-=(1<<i); // decrease temp value
          box_used++; // increase box size
          bit[i]--; // wo bit kam kar do
        }
      }
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}  