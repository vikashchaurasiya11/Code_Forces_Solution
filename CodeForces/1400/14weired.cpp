#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
int main(){
  
  ll n,m;
  cin>>n>>m;

  vector<vector<ll>>a(n,vector<ll> (m));
  vector<vector<ll>>b(100000+1);
  for (ll i=0;i<n;i++) {
    for (ll j=0;j<m;j++) {
      cin>>a[i][j];
      b[a[i][j]].push_back(i+1);
      b[a[i][j]].push_back(j+1);
    }
  }

  ll sum=0;
  for (ll i=1;i<100001;i++){
    if(b[i].size()>2){
      vector<ll>row;
      vector<ll>col;
      for (ll k=0;k<b[i].size();k+=2){
        row.push_back(b[i][k]);
        col.push_back(b[i][k+1]);
      }

      sort(row.begin(),row.end());
      sort(col.begin(),col.end());

      for (ll k = 0; k < row.size(); k++) {
        sum += row[k] * k;
        sum -= row[k] * (row.size() - k - 1);
      }

      for (ll k = 0; k < col.size(); k++) {
        sum += col[k] * k;
        sum -= col[k] * (col.size() - k - 1);
      }
      
    }
  }

  cout<<sum<<endl;

  
  return 0;
}  