#include <iostream>
using namespace std;
class number 
{
	public:
		void pox(int x,int n)
		{
			int ans=1;
			for (int i=0;i<n;i++) 
			{
				ans*=x;
			}
			cout<<ans;
		}
};
int main()
{
	int x,n;
	number d1;
	scanf("%d,%d",&x,&n);
	d1.pox(x,n);
	return 0;
}
