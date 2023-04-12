#include <iostream>
using namespace std;
class number
{
	public:
		void find(a[])
		{
			p=0;
			for (i=0;i<n;i++) 
			{
				flag=0;
				for (j=0;j<n;j++) 
				{
					if (a[j]==a[i]) 
					{
						flag+=1;
					}
				}
				if (flag==2) 
				{
					b[p]=a[j];
					p++;
					flag=0;
				}
			}
		}
		void print()
		{
			for (i=0;i<p;i++) 
			{
				printf("%d ",b[i]);
			}
		}
	private:
		int n,j,i,p,flag,a[n],b[n];
};
int main()
{
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
	    scanf("%d",&a[i]);
	}
	number as;
	as.find(a);
	as.print();
	return 0;
}
