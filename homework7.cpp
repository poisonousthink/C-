#include <iostream>
using namespace std;
class number
{
	public:
	int transfer(int x)
	{
		int sum=0,j=1;
		while (x!=0) 
		{
			sum=sum+x%8*j;
			x/=8;
			j*=10;
		}
		return sum;
	}
	private:
};
int main()
{
	int n,ans;
	scanf("%d",&n);
	number d1;
	ans=d1.transfer(n);
	printf("%d\n",ans);
	return 0;
}
