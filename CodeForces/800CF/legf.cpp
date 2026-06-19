#include <iostream>
using namespace std;
int main() {
  int t;
    cin >> t;   
    if(t<101 && t>0) {             // number of test cases
      for (int i=1; i<=t; i++){
        int n;
        cin>>n;
        if(n<101 && n>0) { 
          if(n%4==0 || n%2==0){
          if(n>3) cout<< n/4 + 1<<endl;
          else cout<<n-1<<endl;
        }
        else cout<<0<<endl;
      }
    }
  }
  return 0;
}