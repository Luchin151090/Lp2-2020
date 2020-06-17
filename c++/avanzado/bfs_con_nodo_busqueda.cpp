#include<stdio.h>
#include <queue>
#include<vector>
#include<iostream>
#include<string.h>
using namespace std;
#define MAX  100
 
vector<int> ady[MAX]; //declaro un array vector de tipo int de tamaño 100
 
bool visitado[MAX]; //DECLARO UN ARRAY BOOLEANO
 
void bfs(int nodo){
   int ini;
   printf("Nodo raiz: ");
   scanf( "%d" , &ini );
   queue<int> Q;
   Q.push(ini); // ingresamos el elemento  o NODO RAIZ = 0
  vector<int>bus;
   while( !Q.empty() ) //Mientras la cola NO ESTE VACIA
   {
     int aux=0, actual = Q.front(); //Asignamos el elemento INICIAL A LA VARIABLE actual  actual = 0 por ejemplo
     aux=actual;
     bus.push_back(aux);
	 Q.pop();  // Sacamos el elemento mas antiguo QUE SERIA EL  0
     visitado[actual] = true; 		//luego ponemos 1 al array booleano en la posicion ACTUAL  = 0 VISITADO[0] = 1
    
     for( int i = 0 ; i < ady[ actual ].size() ; ++i )
	 {
         if( !visitado[ ady[ actual ][ i ] ] ) // AQUI SE VE EL ELEMENTO DEL NODO ACTUAL  , 3 
		 { //LUEGO ESE 3 QUE DEVUELVE EL VECTOR ...ES LA POSICION DEL ARRAY BOOLEANO QUE ESTA VACIO 
           printf("%d --> %d\n" , actual , ady[ actual ][ i ] );
           Q.push( ady[ actual ][ i ] );
         }
 
     }
	 
		
   }
   bool existe;
   for(int i=0;i<bus.size();i++)
	{
		
		if(nodo==bus[i])
		{
			existe=1;
		}
	}
	if(existe)
	{
		cout<<"si ";
	}
	else
		cout<<"no";

 
}
 
int main() {
   int V , E , x , y;
  cout<<"Ingrese #vertices #aristas: "<<endl;
   scanf( "%d %d" , &V , &E ); //Numero de vertices y numero de aristas 
  
   for( int i = 1 ; i <= E ; ++i ){
       scanf( "%d %d" , &x , &y );  //Origen y destino
 
       ady[ x ].push_back( y );
       ady[ y ].push_back( x );
   }
 
   
   int nodo;
   cout<<"buscar un nodo: "<<endl;
   cin>>nodo;
   bfs(nodo);
}
