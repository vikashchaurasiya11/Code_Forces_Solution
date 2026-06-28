#include <iostream>
using namespace std;

long long gcdll(long long x, long long y) {
  while (y) {
    long long temp = x % y;
    x = y;
    y = temp;
  }
  return x;
}

long long lcm1(long long x, long long y) {
  return (long long)((__int128)x / gcdll(x, y) * y);
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long a,b,c,m;
    cin>>a>>b>>c>>m;


    // to get number of days of each individual
    long long A=m/a;
    long long B=m/b;
    long long C=m/c;

    // common between any two LCM of that
    long long ab=lcm1(a, b);
    long long ac=lcm1(a, c);
    long long bc=lcm1(b, c);

    // No. of common between any two
    long long AB=m/ab;
    long long AC=m/ac;
    long long BC=m/bc; 


    // commn between all
    long long abc=lcm1(ab, c); 
    long long ABC=m/abc; 

    // subtract from total +2ABC because some common day are subtracted twice
    long long count1=6*A-3*AB-3*AC+2*ABC;
    long long count2=6*B-3*AB-3*BC+2*ABC;
    long long count3=6*C-3*AC-3*BC+2*ABC;


    cout <<count1<<" "<<count2<<" "<<count3<<endl;
  }

  return 0;
}