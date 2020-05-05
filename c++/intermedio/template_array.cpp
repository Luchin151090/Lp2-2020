#include<iostream>
using namespace std;
template<class G>
void insert(G parr[], int tam)
{
	for(int i=0;i<tam;i++)
	{
		cin>>parr[i];
	}
	cout<<endl;
}
template<class T>
void show(T parr[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		cout<<parr[i]<<" ";
	}
	cout<<endl;
}
int main()
{	cout<<"Array Template for any type date"<<endl;
	int *p;
	int tam=5;
	p=new int[tam];
	cout<<"Array tipo int"<<endl;
	insert(p,tam);
	show(p,tam);
	cout<<"Array tipo char"<<endl;
	char *c;
	c=new char[tam];
	insert(c,tam);
	show(c,tam);
	cout<<"Array tipo string"<<endl;
	string *s;
	s=new string[tam];
	insert(s,tam);
	show(s,tam);
	return 0;
  }
