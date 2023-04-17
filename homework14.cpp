#include <iostream>
using namespace std;
class number{
	public:
		float pingjun(float b[])
		{
			return (b[0]+b[1]+b[2]+b[3]+b[4]+b[5])/6; 
	    }
	    float fangcha(float b[])
	    {
	    	int k;
	    	k=(b[0]+b[1]+b[2]+b[3]+b[4]+b[5])/6;
	    	return ((b[0]-k)*(b[0]-k)+(b[1]-k)+(b[1]-k)+(b[2]-k)+(b[2]-k)+(b[3]-k)*(b[3]-k)+(b[4]-k)*(b[4]-k)+(b[5]-k)*(b[5]-k))/6;
		}
};
int main()
{
	int i,n,m;
	float u,k,a[6];
	number d1;
	cin>>n;
	for (i=0;i<n;i++) 
	{
		for (m=0;m<6;m++) 
		{
			cin>>a[m];
		}
		u=d1.pingjun(a);
		printf("%.2f ",u);
		k=d1.fangcha(a);
		printf("%.2f\n",k);
	}
	return 0;
}
