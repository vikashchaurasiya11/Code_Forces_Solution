#include <iostream>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        long long n; // Length of the array
        cin >> n;
        long long a[n]; // Array to store the elements
        for (int i = 0; i < n; i++) // Loop to input array elements
            cin >> a[i];
        

        long long total_xor = 0; 
        for (int i = 0; i < n; i++) 
            total_xor ^= a[i];  //(a xor b) ==0 agr a==b
        if (n % 2 == 1) 
        {
            cout << total_xor << endl;  // odd ke case me x ki value nikal jayegi kyuki last me wahi bachega (2 x cut ke zero ho jayenge)
        }
        else 
        {
            if (total_xor == 0) 
                cout << total_xor << endl; // x ke do do paatern cut jayenge (jab ai ka sab 0 hoga && x to cut ke zero ho hi jayega)
            else
                cout << -1 << endl; // yaha ai ka xor > 0 hai aur x ==0 hai to final kabhi bhi zero nhi aayega
        }
    }
    return 0;
}

// Time Complexity (TC): O(n) = O(1000)
// Space Complexity (SC): O(n) = O(1000)