#include <iostream>
using namespace std;
class number
{
	public:
		
};
int main()
{
	int a,b,i=0;
	scanf("%d/%d",&a,&b);
	int c[200];
	while (a*10%b&&i<200) 
	{
		c[i]=a*10/b;
		i++;
		a=a*10%b;
	}
	printf("0.");
	for (int x=0;x<i;x++) 
	{
		printf("%d",c[x]);
	}
	printf("\n");
	return 0;
}
