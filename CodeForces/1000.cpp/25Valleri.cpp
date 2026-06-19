#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include<map>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;

    vector <long long > v(n);
    for (long long  i=0;i<n;i++){
      cin>>v[i];
    }
    int flag=0; // agar sab uniqye hua to NO 
    map <int,int> mp; //agr koi do same huwe to YES 
    for (long long  i=0;i<n;i++){
      mp[v[i]]++;
    }
    for(auto x:mp){
      if(x.second>1) flag=1;
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }
  return 0;
}  
// sum of all unique value will never make the sum = other
// 1+2+4+8+16+32+64+128 sab unque hai to kabhi bhi kisi do subarray ka sum equal nhi hoga 
//  agr koi bhi ek reapet hota to repeated wala hi subarray equal ho jaata 