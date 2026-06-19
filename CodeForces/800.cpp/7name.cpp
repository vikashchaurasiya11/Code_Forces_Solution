#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  if(t<1001)
  {
    for (int i=0; i<t; i++) 
    {
      int x=1;
      int n;
      cin>> n;
      string s;
      string t;
      cin>> s;
      cin>> t;
      if(s.length()==n && t.length()==n){
      for (int i=0; i<n-1; i++)
      {
        int v=0;
          for (int j=i+1; j<n; j++)
          {
            if(t[i]==s[j])
            {
              char e= s[j];
              s[j]=s[v++];
              s[v]=e;
            }
          }
      }
      for (int i=0; i<n-1; i++)
      {
        if(s[i]!=t[i])
      {
        x=0;
      }
        
      }
      }
      }



      }

        return 0;
}
