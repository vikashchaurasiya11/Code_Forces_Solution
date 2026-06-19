#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    if(x.length()==n && s.length()==m && n*m <=25 && n*m>=1){
      if(x==s) cout<<1<<endl;
      int c=0;
      int flag=0;
      while (x.length()<m) {
        x=x+x;
        c++;
      }
            //when n>m 2 time me pata chal jayega 
      for(int j=0;j<2;j++){
        for(int i=0;i<x.length()-m+1;i++){
          if(s==x.substr(i,m)){
            flag=1;
            break;
          }
        }
        if(flag==0){
          x=x+x;
          c++;
        }
      }  
      if(flag==0) cout<<-1<<endl;
      if(flag==1) cout<<c<<endl;
      
    }
  }
}  

