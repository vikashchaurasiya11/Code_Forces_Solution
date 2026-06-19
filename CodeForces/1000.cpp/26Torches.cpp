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
    long long x,y,k;
    cin>>x>>y>>k;

   
    long long count=k; // total torch conversion for coal and inital conversion of x sticks
    
    long long Total_stick = y*k + k-1; // total stick needed
    // y*k for coal , k-1 for stick (1) stick in initial given

    
    if(Total_stick%(x-1)==0) count+= Total_stick/(x-1); // when it perfect divide
    else count+= Total_stick/(x-1) +1; // if not perfectly divide it needed one more step to divide perfectly
    cout<<count<<endl;
    
  }
  return 0;
}  
