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
    long long n;
    cin>>n;

    map <int,int> mp;
    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    sort(a.rbegin(),a.rend());
    for (long long i=0;i<n;i++) {
      mp[a[i]]++;
    }

    int flag=0;
    for (auto it: mp){
      if(it.second>1) {
        cout<<-1<<endl;
        flag=1;
        break;
      }
    }

    if(flag==1) continue;
    else {
      for (long long i=0;i<n;i++) {
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}  