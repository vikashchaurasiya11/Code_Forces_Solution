#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;

ll a[200000];
ll pre[30][200001]; // hat bit pe kitne zero hai count kar lenge(sab number ka mila ke)(0 bit ka zero, 1 bit ka 0, 2 bit k no. of zero)

ll range_and(ll l,ll r){ // har range me kitne 1 hai count hoga, uska frq nikal lenge, agr kahih bhi 0 nhi aata hia to use ans me add kar denge
  ll ans=0;
  for(ll i=0;i<30;i++){
    if(pre[i][r+1]-pre[i][l]==0){ // diff ==0 means there is no 0, waha tak satisfy kar rha
      ans+=(1LL<<i);
    }
  }
  return ans; // us bit ka ka bit nikal jayega, agr k se bada howa ya chhota huwa us hisab se condition chalega.
}

int main(){
  int t;
  cin>>t;

  while(t--){
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++){
      cin>>a[i];
    }

    for(ll j=0;j<30;j++){ // count number of bits
      pre[j][0]=0;
      for(ll i=0;i<n;i++){ // we will count number of zero at each bits
        if(a[i]&(1LL<<j)){ // jab bit 1 hoga to as it hoga, no change
          pre[j][i+1]=pre[j][i];
        }
        else{ // jab 0 aayega to +1 kar dnege(no. of zero)
          pre[j][i+1]=pre[j][i]+1;
        }
      }
    }

    ll q;
    cin>>q;

    while(q--){
      ll l,k;
      cin>>l>>k;
      l--;

      if(a[l]<k){ // if the first no. is small
        cout<<-1<<" ";
        continue;
      }

      ll low=l;
      ll high=n-1;

      while(low<high){ // binaray searh between l and n-1
        ll mid=(low+high+1)/2;

        if(range_and(l,mid)>=k){
          low=mid;
        }
        else{
          high=mid-1;
        }
      }
      // lo will store the index and +1 will give the positon
      cout<<low+1<<" "; // it return the index in normal form
    }

    cout<<endl;
  }

  return 0;
}