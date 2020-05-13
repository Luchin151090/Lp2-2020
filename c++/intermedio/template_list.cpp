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
		T operator[](int p);
	private:
		T *a;
		int ta;	
};
template<class T>
mylist<T>::mylist(int _ta)
{	a=NULL;
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
}
template<class T>
void mylist<T>::show()
{	
	for(int i=0;i<ta;i++)
	{
		cout<<a[i]<<" ";
	}
}
template<class T>
bool mylist<T>::full()
{	if(ta==0)
		return true;
	else
		cout<<"full";
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
		cout<<"5: Exit "<<endl;
		
		cin>>op;
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
		}
		cout<<endl;
	}

	while(op!=5);

	return 0;
}
