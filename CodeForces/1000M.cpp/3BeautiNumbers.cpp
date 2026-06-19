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
    string x;
    cin>>x;

    char a= x[0];

    int n= x.size();

    sort(x.begin(),x.end());

    int sum=0;
    int count=0;
    int idx=-1;
    int sum2=0;
    int flag=0;
    for (ll i=0;i<x.size();i++) {
      sum += x[i] - '0';
      
      if(sum>9){
        flag=1;
        break;
      }
      else {
        sum2=sum; // lowest sum yaha store ho jayega
        idx=i;
        count++;
      }
    }

    if(flag==0) cout<<0<<endl;
    
    else {
      if(a<= x[idx]) cout<<n-count<<endl;
      else {
        if(sum2<9) cout<<n-count<<endl; // 8 tak ho to pahle wale ko one kar sakte hai(leading zero nhi ho sakta)
        else cout<<n-count+1<<endl; //(agr 9 hua to ek aur change karna hoga)
      }
    }

    
  }
  return 0;
}  