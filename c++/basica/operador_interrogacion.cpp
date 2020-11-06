#include<iostream>
using namespace std;
int main()
{	
	//Operador ? si es valido se ejecuta la exp_1 , sino la exp_2
	// condicion ? expresion_1:expresion_2
	int n,n1;
	cout<<"Ingrese n y n1"<<endl;
	cin>>n>>n1;
	
	n>n1?cout<<"n es mayor:"<<n : cout<<"n1 es mayor:"<<n1<<endl;
	
	return 0;
}
