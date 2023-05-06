#include <iostream>
using namespace std;
class num 
{
	public:
		void sort(int a[],int n)
		{
			int mid;
			for (int i=n-1;i>0;i--) 
			{
				for (int k=i-1;k>=0;k--) 
				{
					if (a[k]>a[i]) 
					{
						mid=a[i];
						a[i]=a[k];
						a[k]=mid;
					}
				}
			}
		}
};
int main()
{
	int n;
	int a[n];
	cin>>n;
	num d1;
	for (int i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	d1.sort(a,n);
	for (int i=0;i<n;i++) 
	{
		if (i!=n-1) printf("%d ",a[i]);
		else printf("%d",a[i]);
	}
	return 0;
}
