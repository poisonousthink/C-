#include<iostream>
using namespace std;
void hannoi(int n,char A,char B,char C)
{
	if(n==1)
	{
		cout<<"��Բ��"<<n<<"��"<<A<<"�ƶ���"<<C<<endl;
	}
	else
	{
		hannoi(n-1,A,C,B); 
		cout<<"��Բ��"<<n<<"��"<<A<<"�ƶ���"<<C<<endl; 
		hannoi(n-1,B,A,C); 
	}
} 
int main()
{
    int n;
    cout<<"������A��Բ��n�ĸ���:";
    cin>>n;
    cout<<endl;
    hannoi(n,'A','B','C');
    return 0;
}
