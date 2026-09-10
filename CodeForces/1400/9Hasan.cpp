#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin>>t;

  while(t--){
    int n,m;
    cin>>n>>m;

    vector<int>nearestEnemy(n+1,0);

    for(int i=0;i<m;i++){
      int a,b;
      cin>>a>>b;

      if(a>b){
        swap(a,b);
      }

      nearestEnemy[b]=max(nearestEnemy[b],a); // jo sabse badi value hoga start index ka wo store ho jayega b me.(1,5)(2,5) = nearestenemy[5]=2 store ho jayega , wo sabse close hai us index pe.
    }

    vector<int>maxLeft(n+1,0);

    maxLeft[1]=1; // 1 ka 1 hoga

    ll ans=1;

    for(int i=2;i<=n;i++){
      maxLeft[i]=max(maxLeft[i-1],nearestEnemy[i]+1); // prev aur nearest enemy +1 me se jo  max hoga hoga wo answer
      ans+=i-maxLeft[i]+1; // r-1+1 total count
    }

    cout<<ans<<endl;
  }
}