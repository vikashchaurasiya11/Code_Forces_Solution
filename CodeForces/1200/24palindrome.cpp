#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;

    int z=0;
    for (ll i=0;i<n;i++){
      if(s[i]=='0') z++;
    }

    if(z==1){
      cout<<"BOB"<<endl; // bas ek zero bich wala
    }
    else if(z%2==0){
      cout<<"BOB"<<endl; // for z=4. A-F, B-F,A-F,B-R,A-F (3,1) BOB WINS
    }
    else{
      if(s[n/2]=='0'){
        cout<<"ALICE"<<endl; // Z=5 , A-F(BICH WALA),B-F,A-F,B-F,A-R,B-F(2,3) ALICE WINS
      }
      else{
        cout<<"DRAW"<<endl;
      }
    }
  }
  return 0;
}