#include <iostream>
using namespace std;
class num 
{
	public:
		void print(char a[])
		{
			int b[7],i;
			for (i=0;i<7;i++) 
			{
				switch (a[i]) 
				{
					case 65 ... 67:b[i]=2;break;
					case 68 ... 70:b[i]=3;break;
					case 71 ... 73:b[i]=4;break;
					case 74 ... 76:b[i]=5;break;
					case 77 ... 79:b[i]=6;break;
					case 80 ... 83:b[i]=7;break;
					case 84 ... 86:b[i]=8;break;
					case 87 ... 90:b[i]=9;break;
				}
			}
			for (int k=0;k<7;k++) 
			{
				printf("%d",b[k]);
			}
		}
};
int main()
{
	char a[7];
	num d1;
	for (int i=0;i<7;i++) 
	{
		scanf("%c",&a[i]);
	}
	d1.print(a);
	return 0;
}
