#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
  
    long long N,D;
    cin>>N>>D;
    vector <long long> v(N);
    for (long long  i=0;i<N;i++){
      cin>>v[i];
    }
    int n=N;
    sort(v.begin(),v.end());
    long long i=n-1;
    long long j=0;
    long long k=0;
    while(j<=i){
      int c;
      c=D/v[i] +1;
      j+=c-1; // jitne milenge least wale utna skip kar do.(-1) because ek already covered hoga.
      n-=c; //n ko c times ghata do to check condition
      if(n>-1) k++; //end condition to check ki variable bacha hai ya mhi
      i--; // last wale ghata do
    }
    cout<<k<<endl;  
    
  return 0;
}  