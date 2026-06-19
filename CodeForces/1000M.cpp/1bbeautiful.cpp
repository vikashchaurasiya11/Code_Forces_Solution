#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;

    int n= s.length();
    vector <int> suff(n),pre(n);

    int cnt=0;
    for(int i=0;i<n;i++){
      if(s[i]=='2') cnt++;
      pre[i]=cnt; 
    }
    
    cnt=0;
    for(int i=n-1;i>=0;i--){
      if(s[i]=='1' || s[i]=='3') cnt++;
      suff[i]=cnt; 
    }

    int mx=0;
    for(int i=0;i<n;i++){
    mx= max(mx, suff[i]+pre[i]);
    }

    cout<<n-mx<<endl;

    
  }
  return 0;
}  