#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
  ll n, q;
  cin >> n >> q;

  vector<ll> a(n);
  for(ll i = 0; i < n; i++) cin >> a[i];

  vector<ll> pos(51, 0);

  for(ll i = 0; i < n; i++){
    if(pos[a[i]] == 0) pos[a[i]] = i + 1;
  }

  while(q--){
    ll x;
    cin >> x;

    ll p = pos[x];
    cout << p << " ";

    for(int c = 1; c <= 50; c++){
      if(pos[c] < p) pos[c]++;
    }
    pos[x] = 1;
  }

  cout << endl;
}