#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main(){
  
  int t;
  cin >> t;
  while(t--){
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    bool flag = true;
    for(char ch : s){
      if(ch != c){
        flag = false;
        break;
      }
    }

    if(flag){
      cout << 0 << "\n";
      continue;
    }

    bool done =true;
    for(int x = 1; x <= n; x++){
      bool ok = true;
      for(int i = x; i <= n; i += x){
        if(s[i-1] != c){
          ok = false;
          break;
        }
      }
      if(ok){
        cout << 1 << "\n";
        cout << x << "\n";
        done = false;
        break;
      }
    }

    if(done == false) continue;
    
    cout << 2 << "\n";
    cout << n << " " << n-1 << "\n";

    next_case:;
  }
}