#include <iostream>
#include <cstdio>
using namespace std;
long long int a[10000][10000];
int main()
{
	int n,i,m;
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		scanf("%d",&m);
		a[1][1]=1;
		for (int j=2;j<=m;j++) 
		{
			for (int k=1;k<=m;k++) 
			{
				a[j][k]=a[j-1][k]+a[j-1][k-1];
			}
		}
		for (int i=1;i<=m;i++) 
		{
			for (int j=1;j<=m;j++) 
			{
				if (a[i][j]!=0) printf("%d",a[i][j]);
				if (j!=m) printf(" ");
				if (j==m) printf("\n");
			}
		}
	}
	return 0;
}
