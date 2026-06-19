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
    for (long long  i=0;i<n;i++) cin>>v[i];
    long long ans=0;
      
    for(int i=1;i<=n/2;i++){
      if(n%i==0){ // to count number of truck cases
        vector<long long> a(n/i); // store sum of of each window
        int l=0; // initialization of first element
        for(int j=0;j<n;j+=i){ // no. of truck
          long long sum=0;
          for(int k=j;k<j+i;k++){ // sum of each k element store in truck
            sum+=v[k];
          }
          a[l]=sum;
          l++;
        }
        sort(a.begin(),a.end()); 
        ans= max(ans,(a[a.size()-1]-a[0])); // difference store
      }
    }

    cout<<ans<<endl;
  }
  return 0;
}  