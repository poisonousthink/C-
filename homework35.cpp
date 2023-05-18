#include <iostream>
using namespace std;
class code 
{
	public:
	    int mystrstr(char a[],char b[],int alength,int blength)
	{
		for (int i=0;i<alength;i++) 
		{
			if (a[i]==b[0]) 
			{
				for (int j=1;j<blength;j++) 
				{
					if (a[i+j]!=b[j]) break;
					if (j==blength-1) return j;
				}
			}
			if (i==alength-1) return -1;
		}
	}
};
int main()
{
	char ch,a[500],b[500];
	int i=0,j=0;
	code d1;
	while ((ch=getchar())!='\n')
	{
		a[i]=ch;
		i++;//i a[i]length
	}
	while ((ch=getchar())!='\n')
	{
		b[j]=ch;
		j++;//j b[i]length
	}
	printf("%d\n",d1.mystrstr(a,b,i,j));
	return 0;
}
