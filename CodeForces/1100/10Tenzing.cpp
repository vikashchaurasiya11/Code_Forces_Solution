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
    long long n,x;
    cin>>n>>x;

    int flag=0;
    vector <int > pre[3]; // to take 3 vectors at a timer
    for(int i=0;i<3;i++){
      int s=0; // intize with 0
       pre[i].push_back(s);

      for(int j=0;j<n;j++){
        int a;
        cin>>a;
        if((s|a) != s) {
          s|=a;
          pre[i].push_back(s); // saare unique number of that vector will get stored
        }
      }
    }

    // there are max 31 unique numbers possible (sare bits pe ek baar 1 ) ek baar jo 1 aa jayega wo dubarac OR lene pe nhi jayega

    // sabme traverse kar sakte hai ek baar me ( jab hame pata na ho ki pre ka size kya hai)
    for(int A : pre[0]) { 
      for(int B : pre[1]) {
        for(int C : pre[2]) {
          if((A|B|C) ==x)  flag=1;
        }
      }
    }
    
    if(flag ==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


  }
  return 0;
}  
