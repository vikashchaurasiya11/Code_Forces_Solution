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
    long long n;
    cin>>n;
    vector <long long > v(n);
    vector <long long > b(n+1,0); // to store final index
    vector <pair<long long,long long >> a(n); // to store index with highest number value
    vector <pair<long long,long long >> c(n); // to store index

    for (long long  i=0;i<n;i++){
      cin>>v[i];
    }

    for (long long  i=0;i<n;i++){ //store index with the ai
      a[i].first=(v[i]);  
       a[i].second=i;  // sabka index yaha daal denge

      c[i].first=(v[i]); // fill as per index of v to the value in c
      c[i].second=i;
    }

    sort(a.begin(),a.end()); //to get largest element at begining
    reverse(a.begin(), a.end());

    sort(c.begin(),c.end()); //to get largest element at begining
    reverse(c.begin(), c.end());


    long long  t=a[0].second; //largest element ka index dal denge , array ki index se wo already ek kam joga
    b[0]=(t);
    long long w=t;
    long long d=t;
    long long sum=0;

    for (long long  i=0;i<n;i+=2){ // a[i] ko uska required index mil jayega (+2) kyuki agle min next niche wale me mil jayega
      a[i].second = ++t;
     sum+= llabs(a[i].second - d)* a[i].first; 
    }

    for (long long  i=1;i<n;i+=2){
      a[i].second = --w;
      sum+= llabs(a[i].second - d)* a[i].first; 
    }

    
    for (long long  i=0;i<n;i++){
      b[c[i].second +1 ]=a[i].second; //intial index is stored in c and at that index we fill the final index of ai
    }

    cout<< 2*sum <<endl; //as per the question
    cout<<b[0]<<" ";
    for (long long  i=1;i<n+1;i++){
      cout<<b[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}  
