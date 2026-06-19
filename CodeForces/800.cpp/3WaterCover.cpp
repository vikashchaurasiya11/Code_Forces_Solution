#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;  //for all type of empty cell excluding 3 consecutive
    int flag=0;
    if(s.length()==1 && s[0]=='.') {
      c=1;
      cout<<c<<endl;
    }
    else{
      for (int i=1;i<s.length()-1; i++){
        if (s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
          flag=1;
        }
        else if(s[i]=='#') continue;
        else c++;
      }
      if(s[0]=='.') c++;
      if(s[s.length()-1]=='.') c++;
      if(flag==0){
        cout<<c<<endl;
      }
      else cout<<2<<endl;
    }
  }
}