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
    long long n,c;
    cin>>n>>c;

    vector<pair<long long, long long>>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i].first;
      a[i].second=i;
    }
    
    // sort(a.begin(), a.end());

    ll count=0;
    ll i=0;
    ll frq=0;
    ll sum=0;

    vector <long long > b(n);  // store cost for each tele
    for (long long i=0;i<n;i++){
      b[i]= i+1 +a[i].first;
    }

    sort(b.begin(),b.end()); // arrange in ascending
    while(true){ // checak the condition
      count+=b[i];
      if(count>c || i>=n ) break;
      frq++;
      i++;
    }



                // wrong approach
    // while (true){
    //   count += a[i].second + a[i].first +1; // +1 to balance the 0 element of initial index
    //   if(count > c) break;
    //   frq++;
    //   i++;
    // } 
    
    cout<<frq<<endl; // print final
  
  }
  return 0;
}  