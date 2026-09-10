#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin>>n;
  string a,b;
  cin >> a>>b;

  int ba=0,bb=0;
  bool possible=true;

  for (int i=0;i<n;i++) {
    if (a[i]==b[i]) {
      if (a[i]=='(') {
        ba++;
        bb++;
      } 
      else {
        ba--;
        bb--;
      }
    } 
    else{
      if (ba < bb){ // jiski freq jada hai use kam kar denge, uska matlab swapping hi hoga, max diff kam karne ka try karenge, 
        ba++;
        bb--;
      } 
      else{
        bb++;
        ba--;
      }
    }
      //-1 indicates that there is } bracket present ans no { present before it.
    if (ba < 0 || bb < 0){ // -1 condition checks in the same loop , if there is -1 , themn it autiomatically breaks.
      possible = false;
      break;
    }
  }

  // agr koi bhi bracket kam ya jada hoga ya zero ke barabar nhi hoga to answer false aa jayega.
  if (possible && ba == 0 && bb == 0) {
    cout << "YES\n";
  } 
  else {
    cout << "NO\n";
  }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
      solve();
    }
    return 0;
}