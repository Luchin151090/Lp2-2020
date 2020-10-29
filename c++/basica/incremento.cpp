#include<iostream>
using namespace std;
int main()
{	
	int m = 10 ;
	int n;
  
	//operador prefijo-incremento
	cout<<"operador prefijo-incremento"<<endl;
	n = ++m; //incrementas "m" en 1 y asignas asi mismo
			     //luego la asignas a "n" .
	cout<<"m = "<<m<<" n = "<<n<<endl;// m = 11, n = 11
	cout<<endl;
  
	//operador postfijo-incremento
	cout<<"operador postfijo-incremento"<<endl;
	n = m++; //asignas a "n" primero el valor de "m" (n = 11)
			     //luego "m" se incrementa en 1.
	cout<<"m = "<<m<<" n = "<<n<<endl;// m = 12, n = 11
	
	
	int d = 5;
	int e;
	e = ++d * --d; // ++d vale 6, luego --d vale 5
	cout<<e<<endl; // e = 25 
	// ¿ por que no vale e = 30 ?
  
  return 0;
  }
