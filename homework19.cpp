#include <iostream>
using namespace std;
class chengji
{
	public:
		void pingjia(int x)
		{
			switch (x) 
			{
				case 0 ... 59:{cout<<"E\n";break;}
				case 60 ... 69:{cout<<"D\n";break;}
				case 70 ... 79:{cout<<"C\n";break;}
				case 80 ... 89:{cout<<"B\n";break;}
				default:{cout<<"A\n";break;}
			}
		}
};
int main()
{
	int n;
	cin>>n;
	chengji d1;
	d1.pingjia(n);
	return 0;
}
