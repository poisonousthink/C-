#include <iostream>
using namespace std;
class number
{
	public:
		
};
int main()
{
	int n,i,m,flag=0,j,k;
	cin>>n;
	int a[n][n];
	for (i=0;i<n;i++) 
	{
		for (m=0;m<n;m++) 
		{
			cin>>a[i][m];
		}
	}
	for (i=0;i<n;i++) 
	{
		for (m=0;m<n;m++) 
		{
			int flaga=1,flagb=1;
			for (int u=0;u<n;u++) 
			{
				if (a[i][m]<a[i][u]) flaga=0;
			}
			for (int y=0;y<n;y++) 
			{
				if (a[i][m]>a[y][m]) flagb=0;
			}
			if (flaga==1&&flagb==1) 
			{
				flag=1;
				j=i;
				k=m;
			}
		}
	}
	if (flag==1) printf("%d %d",j,k);
	if (flag==0) printf("NO/n");
	return 0;
}
