#include <iostream>
using namespace std;
class number
{
	public:
		void transfer(int x,int y)
		{
			int ans=0,l=1;
						while (x!=0) 
						{
							ans=ans+x%y*l;
							x/=y;
							l*=10;
						}
			printf("%d\n",ans);
		}
	private:
};
int main()
{
	int n,i,c,num;
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		number ans;
		scanf("%d %d",&num,&c);
		ans.transfer(num,c);
	}
	return 0;
}
