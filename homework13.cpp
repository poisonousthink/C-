#include <iostream>
#include <string.h>
using namespace std;
class stu
{
	public:
		float zongchengji(int x,int y)
		{
			return x*0.4+y*0.6;
		}
};
int main()
{
	int n,i,l,k;
	char s[20];
	stu d1;
	cin>>n;
	struct student
	{
		char name[20];
		float banqi;
		float qimo;
		float chengji;
	};
	student a[n];
	for (i=0;i<n;i++) 
	{
		scanf("%s %f %f",&a[i].name,&a[i].banqi,&a[i].qimo);
		a[i].chengji=d1.zongchengji(a[i].banqi,a[i].qimo);
	}
	for (i=n-1;i>0;i--) 
	{
		for (k=i-1;k>=0;k--) 
		{
			if (a[i].chengji>a[k].chengji) 
			{
				l=a[i].chengji;
				a[i].chengji=a[k].chengji;
				a[k].chengji=l;
				l=a[i].banqi;
				a[i].banqi=a[k].banqi;
				a[k].banqi=l;
				l=a[i].qimo;
				a[i].qimo=a[k].qimo;
				a[k].qimo=l;
				strcpy(s,a[i].name);
				strcpy(a[i].name,a[k].name);
				strcpy(a[k].name,s);
			}
		}
	}
	for (i=0;i<n;i++) 
	{
		printf("%s %.2f %.2f %.2f\n",a[i].name,a[i].banqi,a[i].qimo,a[i].chengji);
	}
	return 0;
}
