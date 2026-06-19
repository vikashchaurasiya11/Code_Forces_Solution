#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
ll gcd (ll a ,ll b){ // this gives hcf
  while(b!=0){
    ll rem=b;
    b=a%b;
    a=rem;
  }
  return a;
}

ll lcm (ll c, ll d){ // it will return lcm
  return c /gcd(c,d) *d;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,x,y;
    cin>>n>>x>>y;

    ll xc= n/x; // freq of x element
    ll yc= n/y; // no. of y element
    ll lm = lcm(x,y); // lcm of both no.

    ll sc= n/lm;   // no. of same coinciding element

    // remove no of common elemts from both
    xc-=sc;
    yc-=sc;

    ll sub= (yc*(yc+1))/2; // total sum of elemnts of y indeces divisible

    ll sm = ((n*(n+1))/2) - (((n-xc)*(n-xc+1))/2);

    cout<<sm-sub<<endl;
  }
  return 0;
}  