#include <iostream>
using namespace std;
class password
{
	public:
		void print(char a[],int n,char b[])
		{
			int i=0;
			while (a[i]!='\0') 
			{
				if (a[i]=='-') a[i]=' ';
				i++;
			}
			int m=0,l=0;
			for (int k=0;a[k]!='\0';l++) 
			{
				if (m==n) 
				{
					
				    b[l]='-';
					m=0;
				}
				else if (m!=n) 
				{
					b[l]=a[k];
					m++;
					k++;
				}
			}
			for (int h=0;h<l;h++) 
			{
				if (b[h]!=' ') printf("%c",b[h]);
			}
		}
};
char a[1000],b[1000];
int main()
{
	password d1;
	int i=0,n;
	char ch;
	while ((ch=getchar())!='\n') 
	{
		a[i]=ch;
		i++;
	}
	scanf("%d",&n);
	d1.print(a,n,b);
	return 0;
}
