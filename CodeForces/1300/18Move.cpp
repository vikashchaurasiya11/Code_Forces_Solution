#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
  int n;
  cin>>n;

  int k=n/2;

  if(n%2==0)
   cout<<(k+1)*(k+1)<<endl; // up down and left right have same value (every postion have n/2+1 possible location) . multiplication of both will give all the required cordinates.

  else{

    cout<<2*(k+2)*(k+1)<<endl; // for(n/2+1) it has (n/2+2) location ans for (n/2) it has  (n/2+1)  location so both are multiplied. multiply by 2 bcz there is 2 case (start up down or left/right.)
  }

  return 0;
}  