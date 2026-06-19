#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    long long w,h;
    cin >> w >> h;

    long long ans = 0;

    int a;
    cin >> a;
    vector<long long> arr(a);
    for(int i=0;i<a;i++) cin >> arr[i];
    ans = max(ans, (arr[a-1] - arr[0]) * h);

    int b;
    cin >> b;
    vector<long long> brr(b);
    for(int i=0;i<b;i++) cin >> brr[i];
    ans = max(ans, (brr[b-1] - brr[0]) * h);

    int c;
    cin >> c;
    vector<long long> crr(c);
    for(int i=0;i<c;i++) cin >> crr[i];
    ans = max(ans, (crr[c-1] - crr[0]) * w);

    int d;
    cin >> d;
    vector<long long> drr(d);
    for(int i=0;i<d;i++) cin >> drr[i];
    ans = max(ans, (drr[d-1] - drr[0]) * w);

    cout << ans << endl;
  }

  return 0;
}