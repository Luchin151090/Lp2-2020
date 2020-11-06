#include<iostream>
using namespace std;
int main()
{	

	for(int i=0;i<6;i++)
	{
		//cout<<'*'<<endl;
		for(int j=i;j<6;j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
	for(int i=6;i>=0;i--)
	{
		for(int j=i;j<6;j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
	
	return 0;
}
