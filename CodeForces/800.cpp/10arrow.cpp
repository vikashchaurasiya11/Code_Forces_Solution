#include <iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int sum=0;
    char arr[10][10];
    for (int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        cin>>arr[i][j];
      }
      cout<<endl;
    }
    for (int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        if(arr[i][j]=='X'){
          if(arr[i][j]=='X' && (i==0||j==0||i==9||j==9)) sum=sum+1;
          else if(arr[i][j]=='X' && (i==1||j==1||i==8||j==8)) sum =sum+2;
          else if(arr[i][j]=='X' && (i==2||j==2||i==7||j==7))  sum=sum+3;
          else if(arr[i][j]=='X' && (i==3||j==3||i==6||j==6)) sum=sum+4;
          else sum=sum+5;
        }
      }
    }
    cout<<sum<<endl;
  }
}  