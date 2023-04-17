#include <iostream>
using namespace std;
class circle{
	public:
		void length(int x)
		{
			cout<<"直径="<<x*2<<endl;
		}
		void zhouchang(int x)
		{
			cout<<"周长="<<2*x*3.14<<endl;
		}
		void mianji(int x)
		{
			cout<<"面积="<<x*x*3.14<<endl;
		}
};
int main()
{
	int n;
	cin>>n;
	circle d1;
	d1.length(n);
	d1.zhouchang(n);
	d1.mianji(n);
	return 0;
}
