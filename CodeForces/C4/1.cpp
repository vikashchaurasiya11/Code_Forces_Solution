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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int count=0;
    while(s[i]!='L'){
      count++;
      i++;
    }
    cout<<count+1<<endl;
  }
  return 0;
}  