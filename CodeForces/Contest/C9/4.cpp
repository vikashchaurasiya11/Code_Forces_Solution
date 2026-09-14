#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
#include <string>
using namespace std;
typedef long long ll;

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    string s(n,'0');

    ll k=n/6,r=n%6;

    if(r==0){
      s[2*k-1]='1';
      s[4*k-1]='1';
    }

    else if(r==1){
      s[2*k]='1';
      s[4*k]='1';
    }

    else if(r==2){
      s[0]='1';

      s[2*k+1]='1';

      s[4*k+1]='1';
    }

    else if(r==3){
      s[2*k]='1';
      s[4*k+2]='1';

    }
    else if(r==4){

       s[2*k]='1';
      s[4*k+2]='1';

    }
    else{

      s[2*k+1]='1';
      
      s[4*k+3]='1';
    }
    cout<<s<<endl;



  }
  return 0;
}