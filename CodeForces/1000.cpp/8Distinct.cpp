#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set <char> st;
    vector <int> pre(n,0),suf(n,0);

    for(int i=0;i<n;i++){ //prefix count
      st.insert(s[i]);
      pre[i]=st.size();
    }

    st.clear();

    for(int i=n-1;i>=0;i--){ //suffix count
      st.insert(s[i]);
      suf[i]=st.size();
    }

    int fre=0;
    for(int i=0;i<n-1;i++){ //pre+suff ke ek aage ka sum jo jda hoga wahi wala answer hoga
      fre=max(fre,pre[i]+suf[i+1]);
     }
     cout<<fre<<endl;
  }
  return 0;
}  