#include <iostream>
using namespace std;
class number
{
	public:
		void getnum(int x,int y,int z)
		{
			ans=x+y+z;
		}
		void print()
		{
			cout<<ans<<endl;
		}
	private:
		int ans;
};
int main()
{
	int i,j,k;
	scanf("%1d%1d%1d",&i,&j,&k);
	number ans;
	ans.getnum(i,j,k);
	ans.print();
	return 0;
}
