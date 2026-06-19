#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    vector <pair<long long,long long>> a(n);
    vector<long long> v;
    for (long long  i=0;i<n;i++){
      cin>>a[i].first;
      a[i].second=i+1;
      a[i].first%=k;
      if(a[i].first==0) a[i].first=k;
    }
    sort(a.begin(),a.end(), [](auto &x, auto &y){
    if(x.first == y.first)
      return x.second < y.second;
      return x.first > y.first;
    });
    for(long long i = 0; i < n; i++){
      cout << a[i].second << " ";
    }
    cout<<endl;
  }
  return 0;
}  