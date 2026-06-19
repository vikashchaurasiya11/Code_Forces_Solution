#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t;
  cin >> t;
  
  while(t--){
    int n;
    cin >> n;
    
    char c;
    cin >> c;
    
    string s;
    cin >> s;
    
    if(c == 'g'){
      cout << 0 << endl;
      continue;
    }
    
    string p = s + s;
    int next_g = -1;
    int ans = 0;
    
    for(int i = 2*n - 1; i >= 0; i--){
      if(p[i] == 'g'){
        next_g = i;
      }
      
      if(p[i] == c){
        ans = max(ans, next_g - i);
      }
    }
    
    cout << ans << endl;
  }
  
  return 0;
}