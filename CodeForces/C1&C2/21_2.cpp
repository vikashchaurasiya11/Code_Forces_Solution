#include <iostream>
using namespace std;
#include <vector>
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<int> a,b;
		for(int i=0;i<n;i++){
			if(s[i]=='1') a.push_back(i+1);
			else b.push_back(i+1);
		}
  	if(b.size()%2==1){
		cout<<b.size()<<endl;
      for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
      }
    cout<<endl;
    }
		else if(a.size()%2==0){
			cout<<a.size()<<endl;
			for(int i=0;i<a.size();i++)
			cout<<a[i]<<" ";
			cout<<endl;
	  }
	  else cout<<-1<<endl;
  }
  return 0;
}