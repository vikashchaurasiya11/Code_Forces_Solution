#include <iostream>
using namespace std;

int main()
{
   int t; 
   cin >> t;    while (t--)
    {
        long long a, b, c; 
        cin >> a >> b >> c;
        
        
        if (c % 2 == 1) 
        {
            
            if (b > a) 
                cout << "Second" << endl; 
            else
                cout << "First" << endl; 
      }
        else         {
            
         if (a > b) 
               cout << "First" << endl; // Anna wins
           else
             cout << "Second" << endl; // Katie wins
     }
   }
    return 0;
}

