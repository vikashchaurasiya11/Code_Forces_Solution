#include <iostream>
#include <string>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a;
    cin>>a;
    int c=0;
    long long n=a;
    while(n>0){ //number of digits
      c++;
      n=n/10;
    }
    //give the 1st digit
    while(a>9){ // 1 to 9 there are 9 digits with 1 non zero 
      a=a/10;  // 10 to 99 there are again 9 digits
    }
    cout<<(c-1)*9+a<<endl;  //(c-1)*9 for numbers upto last multiple of 10. 

  }  
  return 0;
}  