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
    ll n,m;
    cin>>n>>m;

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<int> rem(m); // saare remainder ki freq count kar lenge
    
    for (long long i=0;i<n;i++) {
      rem[a[i]%m]++; // freq will be stored for each reminder
    }

    int count=0;
    for (long long i=0;i<m;i++) {
      int x= rem[i], y=rem[(m-i)%m]; // % m bcz pair banana hai to agr i=0 then m-i =m is liye use bhi %m kar denge
 
      if(x==0 && y==0) continue; // jab dono ki freq zero ho

      int l = min(x,y); // abs difference 1 me ek pair ban jayga baki bache ko as it add kar do
      x-= min(l+1,x);
      y-= min(l+1,y);
      count++;
      
      count+=(x+y); // bache huwe add kar do

      rem[i]=0;
      rem[(m-i)%m]=0;
    }
    cout<<count<<endl;
  }
  return 0;
}  