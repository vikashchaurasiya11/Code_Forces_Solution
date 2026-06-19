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
    int length=0;
    for(int i=0;i<n;i++){
      if((s[i]=='1' && s[n-i-1]=='1') || (s[i]=='0' && s[n-i-1]=='0')) {
        length= (n-i-1)-i+1; //+1 to get the actual length
        break;
      }
    }
    cout<<length<<endl;
  }
  return 0;
}  
