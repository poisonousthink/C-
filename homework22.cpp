#include <iostream>
using namespace std;
class number
{
	public:
		int gongyueshu(int x,int y)
		{
			int k;
			while (k=x%y) 
			{
				x=y;
				y=k;
			}
			return y;
		}
		int gongbeishu(int x,int y,int z)
		{
			int l;
			l=x*y/z;
			return l;
		}
};
int main()
{
	int x,y;
	number d1;
	cin>>x;
	cin>>y;
	cout<<d1.gongyueshu(x,y)<<endl;
	cout<<d1.gongbeishu(x,y,(d1.gongyueshu(x,y)))<<endl;
	return 0;
}
