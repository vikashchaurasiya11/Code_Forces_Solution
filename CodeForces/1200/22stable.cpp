#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
  long long n,k,x;
  cin>>n>>k>>x;

  vector<long long>a(n);
  for (long long i=0;i<n;i++) {
    cin>>a[i];
  }

  sort(a.begin(), a.end());
  
  vector<long long>b;
  for (long long i=1;i<n;i++) {
    if(a[i]-a[i-1]>x) b.push_back(a[i]-a[i-1]);
  }

  sort(b.begin(),b.end());

  int count=0;
  for (long long i=0;i<b.size();i++){
    ll z;
    if(b[i]%x==0) z=b[i]/x -1 ; // z= (b[i]-1)/x;
    else z= b[i]/x;

    if(k-z<0) break; // k<z
    k-=z;
    count++;
   
  }

  cout<<b.size()-count +1<<endl; // for groups(ans+1) 2 ka mtlb 3 part me tutega
  
  return 0;
}  