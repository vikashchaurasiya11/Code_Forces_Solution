#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b ||(d-b)<(c-a)) cout<<-1<<endl;
    else if(b==d && c<=a){
      cout<<a-c<<endl;
    }
    else if(c>=a && d>=b){ //dono ko ek sath likh sakte hai 
      cout<<(d-b)+((a+(d-b))-c)<<endl;
    }
    else{
      cout<<(d-b)+(a+(d-b)-c)<<endl;
    }
  }
  return 0;
}  