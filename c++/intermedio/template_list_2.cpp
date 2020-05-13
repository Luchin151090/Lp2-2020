#include<iostream>
using namespace std;
template<class T>
class mylist
{
	public:
		mylist(int _ta);

		void insert();
		void show();
		bool full();
		void capMax();
		void resetlist();
		void orderlist();
		T operator[](int p);
	private:
		T *a;
		int ta;
		
};

template<class T>
mylist<T>::mylist(int _ta)
{	
	a=NULL;
	ta=_ta;
	a=new T[ta];
}
template<class T>
void mylist<T>::insert()
{
	for(int i=0;i<ta;i++)
	{	
		cin>>a[i];
	}
	cout<<endl;
}
template<class T>
	T change(T &a,T &b)
	{
		T aux;
		aux=a;
		a=b;
		b=aux;
	}
template<class T>
void mylist<T>::orderlist()
{

	

		for(int i=0;i<ta;i++)
		{	for(int j=i;j<ta-1;j++)
			{	if(a[i]>a[j+1])
				{change(a[i],a[j+1]);
				}
			}
		}
	
}
template<class T>
void mylist<T>::resetlist()
{
	delete []a;
//	for(int i=0;i<ta;i++)
//	{
//		a[i]=0;
//	}
//	a=new T[ta];
}
template<class T>
void mylist<T>::show()
{	
	for(int i=0;i<ta;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
template<class T>
bool mylist<T>::full()
{	if(ta==0)
		return true;
	else
		cout<<"full";
}
template<class T>
void mylist<T>::capMax()
{cout<<ta;
}
template<class T>
T mylist<T>::operator[](int p)
{	 
	return a[p];
	
}
int main()
{	int op;
	mylist<float>m(4);
	do
	{	cout<<"1: Insert element: "<<endl;
		cout<<"2: Verify full list: "<<endl;
		cout<<"3: show list: "<<endl;
		cout<<"4: show element in position: "<<endl;
		cout<<"5: Size of list:"<<endl;
		cout<<"6: Reset list"<<endl;
		cout<<"7: Order list"<<endl;
		cout<<"0: *** Exit ***"<<endl;
		
		cin>>op;
		cout<<endl;
		switch(op)
		{
			case 1:m.insert();cout<<endl;
			break;
			case 2:m.full();cout<<endl;
			break;
			case 3:m.show();
			break;
			case 4:int p;
				   cout<<"Insert position: "<<endl;
				   cin>>p;
				   cout<<m[p];
				   break;
			case 5:m.capMax();
			break;
			case 6:m.resetlist();
			break;
			case 7:m.orderlist();
			break;
			
		}
		cout<<endl;
	}

	while(op!=0);

	return 0;
}
