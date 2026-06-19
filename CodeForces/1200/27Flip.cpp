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
    ll n;
    cin>>n;

    string s,t;
    cin>>s>>t;
    if(n==1){  // for length 1
      if(s==t) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    else{
      int flag=0,flag2=0;
      int d=0,f=0;

      while(d<n){
        int c1=0,c2=0;
        int pre=d;// store kar lo previous ki value

        for (long long i=d;i<n;i++) { 
          if(s[i]=='0') c1++;
          else c2++;
          if(c1==c2){
            d=i+1;
            f=pre;
            break;
          }
        }
 
        if(c1>c2 || c2>c1) {  // jab dono ki freq alag ho aur loop khtm ho jaye
          flag2=1;
          break;
        }

        int f1=0,f2=0;
        for (long long i=f;i<d;i++){ // jab suffix ke ssare elemnts same ho
          if(s[i]==t[i]) {
            f1=1;
            break;
          }
        }

        for (long long i=f;i<d;i++){// jab suffix ke ssare elemnts diff ho
          if(s[i]!=t[i]) {
            f2=1;
            break;
          }
        }

        if(f1==1 && f2==1) { // jab same aur diff ka mix aa jaye us suffix me
          flag=1;
          break;
        }
      }


      int fg=0;
      if(flag2==1){ // jab freq alag ho tab saare elemnt same hi none chahiye kyuki conversion nhi karna hai hame waha
        for (long long i=d;i<n;i++){
          if(s[i]!=t[i]) {
            fg=1;
            break;
          }
        }
      }

      if( fg==1 || flag==1) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
      
  }
  return 0;
}  