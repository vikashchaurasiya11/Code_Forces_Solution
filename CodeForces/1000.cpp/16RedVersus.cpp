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
    long long n,r,b;
    cin>>n>>r>>b;

    string s="";

    for(int i=0;i<(r/(b+1));i++){ //intial string divide kar lo
      s+='R';
    }


    if(r%(b+1)!=0){ //(b+1) part me divide hoga . jab reminder bachega
      string p=s;
      for(int i=0;i<b;i++){
        if(i<r%(b+1)) p+="RB"; // jitne reminder hai to to ek R add hoga
        else p+='B';// reminder khtm ho jaye to bas B add hoga
        p+=s; 
      } 
      cout<<p<<endl;
    }

    else{ // jab reminder na bache to sab evenly divide hoga 
      string p=s;
      for(int i=0;i<b;i++){
        p+='B'; // sab even hai to bas 'B' add hoga
        p+=s; //last me har baar wo original string add ho jayega
      }
      cout<<p<<endl;
    } 
  }
  return 0;
}  
