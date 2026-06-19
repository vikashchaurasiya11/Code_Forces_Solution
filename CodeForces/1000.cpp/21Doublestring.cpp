#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string a,b;
    cin>>a>>b;
    int ans=0;
     
    
    for (long long  i=0;i<a.length();i++){
      for (long long  j=0;j<b.length();j++){
        if(a[i]==b[j]){
          int k=i;
          int l=j;
          int count=0;
          while(a[k]==b[l] && k<a.length()&&l<b.length()){ // jab tak dono barabar honge count badhega
            count++;
            k++;
            l++;
          }
          ans= max(ans,count);
        }
      }
    }

    cout<<a.length() + b.length() - 2*ans<<endl;
  }
  
  return 0;
}  
