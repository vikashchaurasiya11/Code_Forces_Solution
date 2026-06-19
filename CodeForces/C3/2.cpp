#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
  int t;
  cin>>t;

  while (t--) {
    long long n,k,p,m;
    cin>>n>>k>>p>>m;

    vector<pair<long long, int>>v(n);
    for (long long i=0;i<n;i++) {
      long long x;
      cin>>x;
      v[i]={x,0};
    }
    v[p-1].second=1;
    long long sum=0;
    long long count=0;

    while (true) {
      long long mn=LLONG_MAX;
      long long index= -1;
      bool flag=false;

      for (long long i =0;i<k;i++) {
        if (v[i].second==1) {
          mn=v[i].first;
          index=i;
          flag=true;
          break;
        }
      }

      if (index== -1) {
        for (long long i=0;i<k;i++) {
          if (v[i].first<mn) {
            mn = v[i].first;
            index = i;
          }
        }
      }

      if (sum+mn>m) break;

      sum += mn;
      if (flag) count++;

      pair<long long,int>temp =v[index]; //to get the location and the respective value
      for (long long i=index;i<n-1;i++) {
        v[i]=v[i+1];
      }
      v[n-1]=temp;
    }

    cout<<count<<endl;
  }

  return 0;
}