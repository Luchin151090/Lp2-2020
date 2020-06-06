#include<iostream>
#include<set>
#include<map>

using namespace std;


class Ecosistema
{	public:
    //...................//
		// e) :  polimorfismo
    //...................//
		virtual void clasificar(){};  
		virtual void relacionar(){};
	
};
class Animales : public Ecosistema
{
	public:
		Animales();
		Animales(int,string,string);
		void clasificar(); //polimorfismo
		void relacionar();//polimorfismo
		void comer();
		void reproducir();
    void show();
    //.........................................................//
		// f) : Sobrecarga de operadores : 2 unitarios y 2 binarios
    //.........................................................//
		Animales operator ++(); // unitario
	  Animales operator --(); // unitario
		int operator <(Animales &a); //binarios
		int operator >(Animales &a); //binarios
    int edad;
	private:
		
		string nombre;
		string habitat;
};
Animales::Animales()
{	
	edad=0;
	nombre="NN";
	habitat="NN";
}
Animales::Animales(int _edad,string _nombre,string _habi)
{
	edad=_edad;
	nombre=_nombre;
	habitat=_habi;
}
void Animales::clasificar()
{	int op;
	cout<<"Elija que tipo de animal es:"<<endl;
	cout<<" 1: acuatico "<<endl;
	cout<<" 2: terrestre "<<endl;
	cout<<" 3: aereo "<<endl;
	cout<<" Ingrese : "<<endl;
	cin>>op;
	if(op==1)
	{	cout<<" es un animal acuatico "<<endl;
	}
	else if(op==2)
	{	cout<<nombre<<" es un animal terrestre "<<endl;
	}
	else if(op==3)
	{	cout<<nombre<<" es un animal aereo "<<endl;
	}
	else
	{	cout<<nombre<<" no esta dentro de la categoria "<<endl;
	}
}
void Animales::relacionar()
{
	cout<<" Este ser vivo se relaciona con otros y con su habitat"<<endl;
}
void Animales::comer()
{	int opc;
  cout<<"Que alimento esta comiendo ?"<<endl;
	cout<<" 1: carne "<<endl;
	cout<<" 2: plantas "<<endl;
	cin>>opc;
	if(opc==1)
	{	cout<<nombre<<" este animal come carne"<<endl;
	}
	else if(opc==2)
	{	cout<<nombre<<" este animal come plantas"<<endl;
	}
	else
	{	cout<<nombre<<" no se alimenta de nada"<<endl;
	}
}
void Animales::reproducir()
{	cout<<" los animales se reproducen entre su misma especie" <<endl;
}
void Animales::show()
{  cout<<"Nombre:  "<<nombre<<endl;
   cout<<"Edad: "<<edad<<endl;
   cout<<"Habitat: "<<habitat<<endl;
   cout<<endl;
}
Animales Animales::operator ++ ()
{	Animales ax;
	ax.edad++;
	return ax;
}
Animales Animales::operator -- ()
{	Animales ax;
	ax.edad--;
	return ax;
}
int Animales::operator > (Animales &a)
{	if(edad>a.edad)
	{ return 1;
	}
	else
	{ return 0;
	}
	
}
int Animales::operator < (Animales &a)
{	
	if(edad<a.edad)
	{	return 1;
	}
	else
	{	return 0;
	}
	
}

class Plantas : public Ecosistema
{
	public:
		Plantas();
		Plantas(string,float,string);
		void clasificar();
		void relacionar(); //polimorfismo
		void transformar();//polimorfismo
		void crecer();
    void show();
    //.........................................................//
    // f) : Sobrecarga de operadores : 2 unitarios y 2 binarios
    //.........................................................//
    Plantas operator ++();
    Plantas operator --();
    int operator <(Plantas &a); //binarios
		int operator >(Plantas &a); //binarios



	private:
		string nombre;
		float altura;
		string habitat;
};
Plantas::Plantas()
{
  nombre="nn";
  altura=0.0;
  habitat="nn";
}
Plantas::Plantas(string _nom,float _alt,string _habi)
{
  nombre=_nom;
  altura=_alt;
  habitat=_habi;
}
void Plantas::clasificar()
{ int opc;
  cout<<"Las plantas se clasifica: "<<endl;
  cout<<"1: gimnosperma"<<endl;
  cout<<"2: angiosperma"<<endl;
  cin>>opc;
  if(opc==1)
  {
    cout<<nombre<<" es gimnosperma"<<endl;
  }
  else if(opc==2)
  {
    cout<<nombre<<" es angiosperma"<<endl;
  }
  else
  {
    cout<<nombre<<" no esta categorizada"<<endl;
  }

}
void Plantas::relacionar()
{
  cout<<nombre<<" se relaciona con los animales y con el medio ambiente"<<endl;
}
void Plantas::transformar()
{
  cout<<" transformando el CO2 en O2..."<<endl;
}
void Plantas::crecer()
{
  cout<<nombre<<" su altura es: "<<altura<<endl;
}
void Plantas::show()
{
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"altura (cm): "<<altura<<endl;
  cout<<"Habitat: "<<habitat<<endl;
}
Plantas Plantas::operator ++ ()
{	Plantas ax;
	ax.altura++;
	return ax;
}
Plantas Plantas::operator -- ()
{	Plantas ax;
	ax.altura--;
	return ax;
}
int Plantas::operator > (Plantas &a)
{	if(altura>a.altura)
	{ return 1;
	}
	else
	{ return 0;
	}
	
}
int Plantas::operator < (Plantas &a)
{	
	if(altura<a.altura)
	{	return 1;
	}
	else
	{	return 0;
	}
	
}
//...........................//
// g): Funcion generica
//...........................//
template<class T>
void sho_carac(T &a)
{	cout<<"...MOSTRAMOS LAS CARACTERISTICAS DEL SER VIVO..."<<endl;
	a.show();
}


int main()
{ Animales a1(3,"Leon","sabanas"),a2(15,"Elefante","sabanas");
  Plantas p1("manzanilla",30.2,"campos");
  a1.show();
  cout<<endl;
  a2.show();
  cout<<"Paso 1 año en la sabana y ..."<<endl;
  a1.edad++;
  cout<<endl;
  a1.show();
  cout<<endl;
  cout<<"Hace 1 año en la sabana ..."<<endl;
  a2.edad--;
  a2.show();
  cout<<"Veamos quien es mas viejo..."<<endl;
  if(a1>a2)
  {
    a1.show();
    cout<< " Este animal es mas viejo que el otro ";
    cout<<endl;
  }
  else if(a1<a2)
  {
    a1.show();
    cout<<" Este animal es mas joven que el otro ";
    cout<<endl;
  }
  cout<<endl;
  a1.clasificar();
  cout<<endl;
  sho_carac(p1); //funcion generica

	return 0;
}
