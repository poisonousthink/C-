#include <iostream>
using namespace std;
class number
{
	public:
		int even(int x)
		{
			if (x%2==0) return 1;
			else return 0;
		}
};
int main()
{
	number d1;
	int n,ans=0;
	cin>>n;
	while (n>0) 
	{
		if (!d1.even(n)) ans+=n;
		cin>>n;
	}
	cout<<ans<<endl;
	return 0;
}
