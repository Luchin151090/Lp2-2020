#include<iostream>
using namespace std;
class myarray
{
	public:
		myarray();
		int operator [](int p);
		friend ostream &operator <<( ostream &output,myarray &x);
	    friend istream &operator >>( istream &input,myarray &z);
	private:
		int	*a;
		int size;
		int p_in;
		int p_out;
};
myarray::myarray()
{	size=100;
	a=new int[size];
	p_in=0;
	p_out=0;
}
int myarray::operator [](int p)
{
	return a[p];
}
ostream &operator <<( ostream &output,myarray &x)
{
	output<<x.a[x.p_out++];
	
	return output;
}
istream &operator >>( istream &input,myarray &z)
{	
	input>>z.a[z.p_in++];
	
	return input;
}
int main()
{	myarray a,a2[5];
	for(int i=0;i<5;i++)
	{
		cin>>a2[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<a2[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<4;i++)
		{cin>>a;}
	for(int i=0;i<4;i++)
		{cout<<a;}
	return 0;
}
