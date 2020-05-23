#include<iostream>
#include<map>
using namespace std;


int main()
{
	map<int,string>m1;
	int key1=1,key2=2,key3=3;
	m1[key1]="a";
	m1[key2]="b";
	m1[key3]="c";
	cout<<m1[key1]<<endl;
	cout<<m1[key2]<<endl;
	cout<<m1[key3]<<endl;
	cout<<endl;
	
	//como solo puedo ver el valor que guarda la clave 
	//entonces paso el valor como clave y la clave que declare
	//seria el valor y ya =)
	map<string,int>m2;
	m2[m1[key1]]=key1; 
	m2[m1[key2]]=key2;
	m2[m1[key3]]=key3;
	cout<<m2[m1[key1]]<<endl;
	
	
	
	///
	cout<<m2[m1[key2]]<<endl;
	cout<<m2[m1[key3]]<<endl;
	
	return 0;

}
