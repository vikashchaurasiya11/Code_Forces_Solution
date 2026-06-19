#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,a,b;
    cin>>n>>a>>b; 
    if(a==n && b==n) cout<<"YES"<<endl; // a=b=n then suffix and prefix both are equal
    else if((a+b)>=n) cout<<"NO"<<endl; // a+b=n it is not possible as both permutation are same so a=b=n. 
    else if(n-(a+b)==1) cout<<"NO"<<endl; // yaha bhi identical ban jayega 
    else cout<<"YES"<<endl; // yaha permutation possible hai (n-(a+b)>1)
  }
  return 0;
}  