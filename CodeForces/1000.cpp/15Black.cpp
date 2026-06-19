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
    long long n,k;
    cin >> n >> k;
                                                           
    string s;
    cin >> s;
                                        
    int count = 0;
    for(int i = 0; i < k; i++){
      if(s[i] == 'W') count++;
    }

    int mins = count;
    
    for(int i = k; i < n; i++){
      if(s[i] == 'W') count++;     
      if(s[i-k] == 'W') count--;  

      mins = min(mins, count);
    }
    cout << mins << endl;
  }
  return 0;
}
