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
    long long n;
    cin>>n;

    string s;
    cin>>s;

    int i=0, j=n-1;
    char c,d;

    int fg=0;
    while(i<=j){
      if(s[i]==s[j]){
        i++;
        j--;
      }

      else{
       c= s[i];
       d= s[j];
       fg=1;
       break;
      }
    }

    if(fg==0){
      cout<<0<<endl;
      continue;
    }
    
    int g=0, h=n-1;
    int flag=0;
    int count=0;
    while(g<=h){
      if (s[g]== s[h]){
        g++;
        h--;
      }
      else if(s[g]==c){
        g++;
        count++;
      }
      else if(s[h]==c){
        h--;
        count++;
      }
      else {
        flag=1;
        break; // stop kar do
      }
    }


    int l=0, m=n-1; // we need to check whole string
    int flag1=0;
    int count1=0;
    while(l<=m){
      if (s[l]== s[m]){ // when same
        l++;
        m--;
      }
      else if(s[l]==d){// when different
        l++;
        count1++;
      }
      else if(s[m]==d){
        m--;
        count1++;
      }
      else {
        flag1=1;
        break;
      }
    }

    if(flag==1&&flag1==1) cout<<-1<<endl; // jab dono satisfy nhi honge
    else if(flag==1) cout<<count1<<endl; // jab ek satisfy nhi hoga
    else if(flag1==1) cout<<count<<endl;
    else cout<<min(count,count1)<<endl; // jab dono satisfy karenge

  }
  return 0;
}  