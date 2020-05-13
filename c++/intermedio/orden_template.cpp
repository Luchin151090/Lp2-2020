#include<iostream>
using namespace std;
template<class T>
T change(T &a,T &b)
{
	T aux;
	aux=a;
	a=b;
	b=aux;

}
template<class T>
T orden(T a[],T ta)
{
	for(int i=0;i<ta;i++)
	{	for(int j=i;j<ta-1;j++)
		{	if(a[i]>a[j+1])
			{change(a[i],a[j+1]);
			}
		}
		cout<<a[i]<<" ";
	}
}

int main()
{
	int a[5]={8,1,0,6,20};
	orden(a,5);
	
}
