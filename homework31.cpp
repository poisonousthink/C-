#include <iostream>
using namespace std;
class word
{
	public:
		void num(char a[],int flag)
		{
			int b[100],k=0,flag1=0;
			for (int i=0;i<=flag;i++) 
			{
				if (a[i]==' '||a[i]=='\0') 
				{
					b[flag1]=k;
					flag1++;
					k=0;
					continue;
				}
				k++;
			}
			b[flag1-1]-=1;
			for (int i=0;i<flag1;i++) 
			{
				printf("%d ",b[i]);
			}
		}
};
char a[1000];
int main()
{
	word d1;
	int i=0;
	char ch;
	while ((ch=getchar())!='\n') 
	{
		a[i]=ch;
		i++;
	}
	d1.num(a,i);
	return 0;
}
