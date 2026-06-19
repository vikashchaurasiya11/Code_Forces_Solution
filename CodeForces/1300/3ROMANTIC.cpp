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
    ll n;
    cin>>n;

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<long long>pe(n,0);
    vector<long long>po(n,0);

    map<ll, int >mp;

    po[0]=a[0];
    pe[0] =0;

    mp[0]++;
    mp[pe[0]-po[0]]++; // baad me 1st index se chal raha

    
    for (long long i=1;i<n;i++) {
      po[i]=po[i-1];
      pe[i]= pe[i-1];

      if(i%2!=0) {
        pe[i]+=a[i];
      }
      else {
        po[i]+=a[i]; 
      }
    mp[pe[i]-po[i]]++;
  }

  int flag=0;
  for(auto x : mp){
    if(x.second>1) {
      flag=1;
      break;
    }
  }

  if(flag==1) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

  }
  return 0;
}  