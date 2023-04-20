#include <iostream>
using namespace std;
class jijie
{
	public:
		void choose(int x)
		{
			switch (x) 
			{
				case 1:{cout<<"Spring\n";break;}
				case 2:{cout<<"Summer\n";break;}
				case 3:{cout<<"Fall\n";break;}
				case 4:{cout<<"Winter\n";break;}
			}
		}
};
int main()
{
	int n;
	cin>>n;
	jijie d1;
	d1.choose(n);
	return 0;
}
