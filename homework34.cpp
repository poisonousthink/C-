#include<iostream>
using namespace std;
void hannoi(int n,char A,char B,char C)
{
	if(n==1)
	{
		cout<<"将圆盘"<<n<<"从"<<A<<"移动到"<<C<<endl;
	}
	else
	{
		hannoi(n-1,A,C,B); 
		cout<<"将圆盘"<<n<<"从"<<A<<"移动到"<<C<<endl; 
		hannoi(n-1,B,A,C); 
	}
} 
int main()
{
    int n;
    cout<<"请输入A上圆盘n的个数:";
    cin>>n;
    cout<<endl;
    hannoi(n,'A','B','C');
    return 0;
}
