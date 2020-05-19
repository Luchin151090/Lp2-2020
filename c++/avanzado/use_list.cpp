#include<iostream>
#include<set>
#include<map>
#include<list>
using namespace std;
//contenedores lineales
//uso de la lista, los elementos estan enlazados por punteros VINCULADOS ENTRE SI

int main()
{	//PRIMERA FORMA DE INSERTAR ELEMENTOS 
	list<int>list1 ={1,3,5,80};

	for(auto x:list1)
	{	cout<<x<<" ";
	}
  cout<<endl;
  
  //SEGUNDA FORMA DE INSERTAR ELEMENTOS
  list<int>list2;
	list2.push_back(34);
	list2.push_back(213);
	
	for(auto x1:list2)
	{cout<<x1<<" ";
	}
  cout<<endl;
  //uso de empty:retorna un true o false
  list<int>list3;
  cout<<"La lista esta vacia ?"<<endl;
  cout<<list3.empty()<<endl; //retorno un valor booleano 1 o 0

  list3.push_back(234);
  list3.push_back(2344);
  cout<<"la lista esta vacia ?"<<endl;
  cout<<list3.empty()<<endl;//retorna 0 y eso significa que esta llena

  //uso del size : devuelve la cant ele.
  list<int>list4;
  list4.push_back(88);
  cout<<"Cantidad de elementos: "<<list4.size()<<endl;

  //uso del max_size: devuelve la cap max del contenedor ESTO DEPENDE TAMBIEN DE LA RAM DEL CPU
  list<int>list5;
  cout<<"Limite de una lista: "<<list5.max_size()<<endl;

  //uso del swap() : cambia las listas
  list<int>list6 ={1,3,5};
  list<int>list7 = {2,6,7};
  swap(list6,list7);
  for(auto x2: list6)
  {
    cout<<x2<<" ";
  }
  cout<<endl;


  //uso del resize
  list<int>list8 = {4,5,6};
  for(auto x2: list8)
  {
    cout<<x2<<" ";
  }cout<<endl;
  cout<<"Despues del resize"<<endl;
  list8.resize(6);
  for(auto x2: list8)
  {
    cout<<x2<<" ";
  }
  cout<<endl<<endl;
  //uso del clear: limpia la lista
  list<int>list9={2,6};
  for(auto x2: list9)
  {
    cout<<x2<<" ";
  }
  cout<<endl;
  cout<<"Despues del clear:"<<endl;
  list9.clear();
  cout<<endl;
  for(auto x2: list9)
  {
    cout<<x2<<" ";
  }
  cout<<endl<<endl;

  //uso del splice
  list<int>list10={2,6,8};
  list<int>list11={9,10,11};
  //list10.splice(list10,list11);
  
  //uso del remove y removeif
  list<int>list12={55,7,9,9,65};
  list12.remove(9);//remueve todos los 9
  
  for(auto x3: list12)
  {
    cout<<x3<<" ";
  }
  cout<<endl;
  list12.remove_if([](int n)//remueve mayor a un n
  {
    return n>55;
  });
  cout<<endl;
  for(auto x3: list12)
  {
    cout<<x3<<" ";
  }
  cout<<endl;
  cout<<endl;

  //uso  del sort y reverse: ordena de forma ascendente y descendente
  list<int>li={9,8,7,6,5};cout<<endl;
  for(auto x3: li)
  {
    cout<<x3<<" ";
  }
  li.sort();
  cout<<endl;
   for(auto x3: li)
  {
    cout<<x3<<" ";
  }cout<<endl;
  li.reverse();
   for(auto x3: li)
  {
    cout<<x3<<" ";
  }

	return 0;
}
