#include <iostream>
using namespace std;
class nianling
{
	public:
		void suishu(int x)
		{
			switch (x) 
			{
				case 1 ... 10:{cout<<"Children\n";break;}
				case 11 ... 20:{cout<<"Teenagers\n";break;}
				case 21 ... 40:{cout<<"Youth\n";break;}
				case 41 ... 50:{cout<<"Middle-aged\n";break;}
				case 51 ... 80:{cout<<"Elderly\n";break;}
				case 81 ... 100:{cout<<"Old man\n";break;}
			}
		}
};
int main()
{
	int n;
	cin>>n;
	nianling d1;
	d1.suishu(n);
	return 0;
}
