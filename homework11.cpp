#include <iostream>
using namespace std;
class number{
	public:
		int checkhuiwen(int x)
		{
			int y=0,k;
			k=x;
			while (x!=0) 
			{
				y=x%10+y*10;
				x/=10;
			}
			if (y==k) return 1;
			else return 0;
		}
};
int main()
{
	int N,i,m,k,l=0;
	number d1;
	cin>>N;
	for (i=0;i<N;i++) 
	{
		cin>>m;
		cin>>k;
		int a[k],flag=0;
		while (flag<k) 
		{
			m+=1;
			if (d1.checkhuiwen(m)) 
			{
				flag+=1;
				a[l]=m;
				l++;
			}
		}
		for (int j=0;j<k;j++) 
		{
			printf("%d ",a[j]);
			if (j==k-1) printf("\n");
		}
	}
	return 0;
}
