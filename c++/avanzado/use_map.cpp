#include<iostream>
#include<set>
#include<map>
using namespace std;
//uso del map . Este tipo de arrays tienen en particular en que sus
//en que sus elementos van asociados a una determinada clave y no de
//un modo indexado como un array tradicional
int main()
{	//PRIMERA FORMA DEL MAP
	map<float,string>m1;
	m1[1]="jorge";
	m1[24]="leo";
	m1[44]="luis";
	m1[32]="raquelita";
	//si queremos saber el el valor de la clave 24
	cout<<m1[24]<<endl;
	
  //SEGUNDA FORMA DEL MAP
	map<float,string>m2;
	m2={{68,"beto"},{77,"juan"},{112,"hugo"},{23,"ana"}};
	//si queremos saber el valor de la clave 23
	cout<<m2[23]<<endl;

  //TERCERA FORMA DEL MAP
  map<float,string>m3;
  m3.insert(make_pair(123,"carlos"));
  m3.insert(make_pair(899,"lupe"));
  //si queremos saber el valor de la clave 899
  cout<<m3[899]<<endl;
	return 0;
}
