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
    ll n;
    cin>>n;
    string s;
    cin>>s;

    string mex="";
    for (char i = 'a'; i <='z'; i++){
      if(s.find(i)== string::npos) {
        mex=i;
        break;
      }
    }

    for (char i = 'a'; i <='z'; i++){
      for (char j = 'a'; j <='z'; j++){
        string tmp="";
        tmp.push_back(i);
        tmp.push_back(j);
        if( mex=="" && s.find(tmp)== string::npos) {
          mex=tmp;
          break;
        }
      }
    }

    for (char i = 'a'; i <='z'; i++){
      for (char j = 'a'; j <='z'; j++){
        for (char k = 'a'; k<='z'; k++){
          string tmp="";
          tmp.push_back(i);
          tmp.push_back(j);
          tmp.push_back(k);
          if( mex=="" && s.find(tmp)== string::npos) {
            mex=tmp;
            break;
          }
        }
      }
    }


    cout<<mex<<endl;
    
  }
  return 0;
}  