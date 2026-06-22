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
    ll n;
    cin>>n;

    vector<ll>a;
    for(int i=0;i<2;i++){
      for (ll i=1;i<=n;i++) { // 4...n1234..n123
        a.push_back(i);
      }
    }

    for (ll i=2;i<=n;i++) { // 234...n
      a.push_back(i);
    }

    a.push_back(1); // 1

    for (ll i=1;i<=n;i++) { //1234...n
      a.push_back(i);
    }
    


    for (ll i=0;i<a.size();i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
    
  }
  return 0;
}  