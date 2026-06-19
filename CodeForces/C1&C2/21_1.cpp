#include <iostream>
#include <string>
using namespace std;
#include <vector>
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int flag =0;
    int c=0;
    for(int i=0;i<s.length()-1;i++){
      if(s[i]!=s[i+1]) c++;
      if(s[i]==s[i+1]) flag=1;
    }
    if(s[0]==s[s.length()-1]) cout<<c+1<<endl;
    else if(flag ==1) cout<<c+2<<endl;
    else cout<<c+1<<endl;
  }
  return 0;
}  