#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		long long n, x;
		cin >> n >> x; 
		int arr[n];
    long long sum=0,max=0;
    for (int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
      if(arr[i]%x==0) max+=arr[i]/x;
      else max+=arr[i]/x+1;
    }
    if(sum%x!=0) sum=sum/x+1;
    else sum=sum/x;
    cout<<sum<<" "<<max<<endl;
	}
	return 0;
}

