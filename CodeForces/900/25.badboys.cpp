#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,m,i,j;
    cin>>n>>m>>i>>j;
    long long x1,x2,y1,y2;
    if((i!=1 && j!=m) ){
      x1=1;
      y1=1;
      x2=n;
      y2=m;
    }
    else{
      x1=1;
      y1=1;
      x2=n;
      y2=m;
    }
    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
  }
}  