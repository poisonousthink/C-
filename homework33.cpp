#include <iostream>
using namespace std;
class number 
{
	public:
		void change(int n,int a[])
		{
			for (int i=0;i<n;i++) 
			{
				cout<<a[n-i-1];
			}
		}
};
int a[32];
int main()
{
	number d1;
	int flag;
	cin>>flag;
	for (int i=0;i<flag;i++) 
	{
		scanf("%1d",&a[i]);
	}
	d1.change(flag,a);
	return 0;
}
