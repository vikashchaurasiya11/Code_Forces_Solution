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

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    ll i=0, j=n-1;
    
    

    while(i<=j && a[i]== a[j] ){ // hame wo value mil jayegi jo subtract karni hai 
      j--;
      i++;
    }
    if(i>=j) {
      cout<<"YES"<<endl;
      continue; // next case pe le jayega
    }
    
    ll b1= a[i], b2= a[j];
    ll flag1=0, flag2=0; // dono i and j ki value ko satisfy kara ke dekhenge jo ho jayega use rakh lenge

    ll l=i, r=j;
    while(l<=r){ // check for b1 and if found remove that b
      if(a[l] != a[r] ) {
        if(a[l]==b1){
          l++;
        }
        else if(a[r]==b1){
          r--;
        }
        else {
          flag1=1;
          break;
        }
      }
      else{
        l++;
        r--;
      }
    }

    l=i, r=j;
    while(l<=r){ // check for b2 and if found remove that b
      if(a[l] != a[r]){
          if(a[l]==b2){
          l++;
        }
        else if(a[r]==b2){
          r--;
        }
        else {
          flag2=1;
          break;
        }
      }
      else{
        l++;
        r--;
      }
    }

    if(flag1 && flag2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    
  }
  return 0;
}  