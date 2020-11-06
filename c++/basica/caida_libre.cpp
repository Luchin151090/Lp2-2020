#include<iostream>
#include<cmath>
using namespace std;
int main()
{	
	//vf_2 = 2gh
	float velocidad_final,altura;
	float gravedad = 9.8; //  m/s_2
	cout<<"Ingresa la velocidad: "<<endl;
	cin>>velocidad_final;
	cout<<"La altura que es lanzada es: "<<endl;
	altura =pow(velocidad_final,2)/(2*(gravedad));
	cout<<altura;
	// h = gt_2/2
	float altura2,tiempo;
	cout<<endl;
	cout<<"CLV - manzana del arbol:"<<endl;
	cout<<"Ingrese el tiempo:"<<endl;
	cin>>tiempo;
	cout<<"La altura que cae la manzana es:"<<endl;
	altura2 = (gravedad*pow(tiempo,2))/2;
	cout<<altura2;
	return 0;
}
