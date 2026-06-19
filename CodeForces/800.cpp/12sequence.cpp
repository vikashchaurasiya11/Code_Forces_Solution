#include <iostream>
#include <vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long v[n];
    for (int i=0;i<n;i++){
      cin>>v[i];
    }
    if(n==1) cout<<n<<endl<<v[0]<<endl;
    else{
      int flag=0;
      for(int i=0;i<n-1;i++){
        if((v[i]!=v[i+1])) flag=1;
      }
      int fla=0;
      for(int i=0;i<n-1;i++){
        if (v[i+1]-v[i]==1) continue;
        else fla=1;
      }
      if(flag==0 || fla==0) {
        cout<<n<<endl;
        for(int i=0;i<n;i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
      }
      else{
        vector<long>v;
        v.push_back(v[0]);
        int k=0;
        for (int i=1;i<n+1;i++){
          if(v[i-1] - v[i]>1 && c==0) {
            v[i]=v[i];
            if(v[i]-1>0){
             v[i+1]=v[i]-1;
            }
            else v[i+1]=v[i];
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
            k=i;
          }
          else if((v[i-1] - v[i]==1) ){
            v[i]=v[i];
            if(v[i]-1>0){
             v[i+1]=v[i]-1;
            }
            else v[i+1]=v[i];
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
            k=i;
          }
          else{ 
            if(c==0) v[i]=v[i];
            else v[i+1]=v[i];
          }
        }
        cout<<n+1<<endl;
        for (int i=0;i<n+1;i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
      }
    }  
  }
}  