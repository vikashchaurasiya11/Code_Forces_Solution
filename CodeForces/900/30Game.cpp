#include <iostream>
using namespace std;
#include <vector>
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int c=0,f=0;
    for(int i=0;i<s.length();i++){
      if(s[i]=='0') c++;
      else f++;
    }
    if(c>=f) {
      if(f%2==0) cout<<"NET"<<endl;
      else cout<<"DA"<<endl;
    }
    else{
      if(c%2==0) cout<<"NET"<<endl;
      else cout<<"DA"<<endl;
    }
  }
  return 0;
}  