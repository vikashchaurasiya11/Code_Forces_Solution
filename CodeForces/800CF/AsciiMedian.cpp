#include <iostream>
using namespace std;
int main(){
  int g,c,l;
  cin>>g>>c>>l;
  int x;
  if(g>79 && g<101 && c>79 && c<101 && l >79 && l<101 ){
  int d = max(g,max(l,c));
  int e = min(g,min(l,c));
  if(g!=d && g!=e )
   x=g ;
  else if (c!=d && c!=e )
  x=c ;
  else x= l;
  if ((d-e)>=10){
    cout<<"check again";
  }
  else
   cout<<"final "<< x;

  }
}