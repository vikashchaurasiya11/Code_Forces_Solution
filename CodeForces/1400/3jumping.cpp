#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int segmentStart[200000], segmentEnd[200000]; // global variable for li an ri

bool isReachableWithJump(int segmentCount, int maxJump)
{
	int currentMinPosition = 0;   // iniatially at zero
	int currentMaxPosition = 0; 

	for (int i = 0; i < segmentCount; i++)
	{
		currentMaxPosition += maxJump; // if k=6 (-6,6 tak check karega)
		currentMinPosition -= maxJump;
		
		int reachableStart = max(currentMinPosition, segmentStart[i]); // intersection of both point
		int reachableEnd = min(currentMaxPosition, segmentEnd[i]);
		
		if (reachableStart > reachableEnd) // if it returns null, then break
		{
			return false; 
		}

		currentMinPosition = reachableStart;// update the common part
		currentMaxPosition = reachableEnd;
	}
	return true; // if does not retutn false, then return true.
}

void solveTestCase()
{
	int segmentCount;
	cin >> segmentCount;

	for (int i = 0; i < segmentCount; i++)
	{
		cin >> segmentStart[i] >> segmentEnd[i];  
	}

	int low = 0, high = 1e9; 

	while (low < high)
	{
		int mid = (low + high) / 2; 
		if (isReachableWithJump(segmentCount, mid)) // if possible then true
		{
			high = mid; // possible hote hi return kar do
		}
		else
		{
			low = mid + 1; // if not possible for that k , then update the low
		}
	}
	cout << low << '\n';  
}

int main()
{
	int testCases;
	cin >> testCases;

	for (int testCase = 0; testCase < testCases; testCase++)
	{
		solveTestCase();
	}
}
