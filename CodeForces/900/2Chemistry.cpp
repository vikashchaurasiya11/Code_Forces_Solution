#include <iostream>
#include <string>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int flag=0;
    int i=0;
    while(s[i]!='\0'){
      if(s[i]==s[i+1]) i+=2;
      else {
        flag++;
        i++;
      }
    }
    // if((flag-k)>1) cout<<"NO"<<endl;
    //     else cout<<"YES"<<endl;
    if(n%2==0){
      if(k%2!=0){
        if((flag-k)>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
      } 
      else{
        if((flag-k)>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
      }
    }
    else{
      if(k%2!=0){
        if((flag-k)>0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
      } 
      else{
        if((flag-k)>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
      }
    }
  }
  return 0;
}  