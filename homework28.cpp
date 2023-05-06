#include <iostream>
using namespace std;
class zifu
{
	public:
		void print(char a[],char b[],int x,int y)
		{
			int c[100],flag=0;
			for (int i=0;i<y;i++) 
			{
				if (b[i]==a[0]) 
				{
					for (int j=1;j<x;j++) 
					{
						if (a[j]!=b[i+j]) break;
						if (j==x-1) 
						{
							c[flag]=i;
							flag++;
						}
					}
				}
			}
			for (int i=0;i<flag;i++) 
			{
				printf("%d",c[i]);
				if (i!=flag-1) printf(" ");
			}
		}
};
char a[10000],b[10000];
int main()
{
	char ch;
	zifu d1;
	int flag1=0,flag2=0;
	while ((ch=getchar())!='\n') 
	{
		a[flag1]=ch;
		flag1++;
	}
	while ((ch=getchar())!='\n') 
	{
		b[flag2]=ch;
		flag2++;
	}
	d1.print(a,b,flag1,flag2);
	return 0;
}
