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

    if(n==10) cout<<-1<<endl; // only for this case its not plaindrome nor divide bt 12 
    else{
      ll ans= n%12;
      if(ans==10){
        cout<<22<<" "<<n-22<<endl; // if (n>10) (add 12 to 10 and remove 12 from multiple of 12 , it remains divisible by 12)
      }
      else {
        cout<<n%12<<" "<<n-(n%12)<<endl; // 1,2,3,4,5,6,7,8,9,11 all the reminders of 12 are palindrome , so print reminder and subtract it from n , it give the no. which is divisible by 12.
      }
    }

    
  }
  return 0;
}  