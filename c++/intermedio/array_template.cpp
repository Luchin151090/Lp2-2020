#include<iostream>
using namespace std;
template<class T>
class Lista
{	public:
		Lista();
		void ingresar(T x);
		void show()
		{
			for(int i=0;i<ta;i++)
			{
				cout<<array[i]<<endl;
			}
		};
		Lista operator[](int p)
		{
			return array[p];
			 
		}
		friend ostream &operator <<( ostream &output,Lista <T>&x);
	    friend istream &operator >>( istream &input,Lista <T>&z);
	private:
		T *array;
		int ta;
		int tope;
		int p_in;
		int p_out;
		
};
template<class T>
ostream &operator <<( ostream &output,Lista <T>&x)
{
	output<<x.array[x.p_out++];
	
	return output;
}
template<class T>
istream &operator >>( istream &input,Lista <T>&z)
{	
	input>>z.array[z.p_in++];
	
	return input;
}
template<class T>
Lista<T>::Lista()
{ 	tope=10;
	ta=tope;
	T *array=NULL;

	array=new T[ta];
	
}
template<class T>
void Lista<T>::ingresar(T x)
{
	for(int i=0;i<ta;i++)
	{
		array[i]=x;
	}
}

int main()
{
	Lista<int>y;
	y.ingresar(4);
	y.show();
	cout<<y[2]<<endl;
	return 0;
}
