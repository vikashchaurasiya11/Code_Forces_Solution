#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    int flag=0;
    if (n==k && k>x) flag=1;
    else if(k>2) flag=1;
    else {
      if(x>1)  flag=1;
      else {
        if(k==2 && n%2==0) flag=1;
      }
    }
    if(flag==1){
      cout<<"YES"<<endl;
      if(x>1){
        cout<<n<<endl;
        for(int i=0;i<n;i++){
          cout<<1<<" ";
        }
        cout<<endl;
      }
      else if(x==2) {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
          cout<<2<<" ";
        }
        cout<<endl;
      }
      else{
        cout<<n/2<<endl;
        if(n%2==0){
          for(int i=0;i<n/2;i++){
            cout<<2<<" ";
          }
          cout<<endl;
        }  
        else {
          for(int i=0;i<n/2-1;i++){
            cout<<2<<" ";
          }
          cout<<3<<" ";
          cout<<endl;
        }   
      }
    }
    else cout<<"NO"<<endl;
  }
}  