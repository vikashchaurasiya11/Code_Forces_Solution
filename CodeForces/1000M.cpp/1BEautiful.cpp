#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--){
    string s;
    cin>>s;

    int count=0;
    
    for(ll i=0;i<s.length();i++){
      if(s[i]=='4') count++;
    }

    int c1 = 0; 
    int total_twos = 0;
    for(ll i=0; i<s.length(); i++) {
        if(s[i] == '2') total_twos++;
    }
    
    int c2 = total_twos; 
    int min_123_deletions = c2; 

    for(ll i=0; i<s.length(); i++){
      if(s[i] == '4') continue;

      if(s[i] == '2') {
        c2--; 
      }
      
      if(s[i] == '1' || s[i] == '3') {
        c1++; 
      }

      min_123_deletions = min(min_123_deletions, c1 + c2);
    }

    cout<<count + min_123_deletions<<endl;
  }

  return 0;
}