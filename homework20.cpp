#include <iostream>
using namespace std;
class time
{
	public:
		
};
int main()
{
	int t;
	cin>>t;
	if (t/10==0) 
	{
		cout<<"160"<<t;
		return 0;
	}
	if (t/100==0) 
	{
		cout<<"16"<<t;
		return 0;
	}
	if (t/1000==0) 
	{
		if (t>=800) 
		{
			cout<<t-800;
			return 0;
		}
		else 
		{
			t=t%100+2400-(800-(t-t%100));
			cout<<t;
			return 0;
		}
	}
	cout<<t-800;
	return 0;
}
