#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;

    int count=a;
    int xr=0;
    
    if((a-1)%4==0) xr=a-1;
    if((a-1)%4==1) xr=1;
    if((a-1)%4==2) xr=(a-1)+1;
    if((a-1)%4==3) xr=0;

    if(xr==b) cout<<count<<endl;
    else if((xr^b )!= a) cout<<count+1<<endl;
    else{
      cout<<count+2<<endl;
    }
  }
  return 0;
}  
