#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;

    vector<int> cnt(n+2,0);

    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      cnt[x]++;
    }

    int mex=0;
    while(cnt[mex]>0){
      mex++;
    }

    if(mex==0){ // hamesha dono taraf 0 banega
      cout<<"NO"<<endl;
    }
    else if(mex==1){
      if(cnt[0]==1){
        cout<<"YES"<<endl; // ek taraf one hoga to dusre taraf zero and vice versa.
      }
      else{
        cout<<"NO"<<endl; // jab bhi 0 ke dono taraf divide hoga to dono side hamesha 1 aayega (ex: 2,4,3,0,0,3) (2-0 tak 1 miss hai)(0-3 tak fir  1 miss hai)
      }
    }
    else{ // no ko jab ascending order me kar denge to hamesha ek me 1 hoga to dusre me 2 miss hoga , aur ja isme 2 miss hoga to oposite me 0 miss hoga.(example soch lo)
      cout<<"YES"<<endl;
    }
  }

  return 0;
}