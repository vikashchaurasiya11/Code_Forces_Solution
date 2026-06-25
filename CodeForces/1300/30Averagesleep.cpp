#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  
  ll n,k;
  cin>>n>>k;


  vector<long double>a(n);
  vector< long double>pre(n+1);
  
  pre[0]=0;
  for (ll i=0;i<n;i++) {
    cin>>a[i];
    pre[i+1]=a[i]+pre[i]; // store all the prefix sum 
  }


  long double week= n-k +1;

  long double sum=0;
  ll idx=0;
  for (ll i=week ;i<n+1;i++) {// traverse whole prefix , when it moves froward it removes the value of bavk to maintain the lenght of the array , which is of length= week;
    sum+= pre[i];
    sum-= pre[idx++];
  }

  cout<<fixed<<(sum/week)<<endl; // fixed give significant value after the decimal point

  return 0;
}  