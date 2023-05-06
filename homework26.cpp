#include <iostream>
using namespace std;
class stu 
{
	public:
		int iscancel (int a[],int n,int k)
		{
			int flag=0,i;
			for (i=0;i<n;i++) 
			{
				if (a[i]<=0) flag++;
			}
			if (flag<k) return 0;
			else return 1;
		}
};
int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	int a[n];
	stu d1;
	for (int i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	if (d1.iscancel(a,n,k)) printf("No\n");
	else printf("Yes\n");
	return 0;
}
