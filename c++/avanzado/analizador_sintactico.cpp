#include<iostream>
#include<string>
#include<vector>

using namespace std;
//Pila//
vector<string>pila[8];
string sint[2] = { "int","*"};
//posicion actual de la pila
int pos_ac = 0;

// terminales //
string termi[4] = {"int","*","+","("};

//PRODUCCION DE int ///
vector<string>_int[4] = { {"T","X"},{"n","n"},{"int","Y"},{"n","n"} }; // 0 - E // 1 - X// 2 - T // 3 - Y

//PRODUCCION DE * ///
vector<string>ast[4] = { {"n","n"},{"n","n"},{"n","n"},{"*","T"} }; // 0 // 1 // 2 // 3

int iniciar(string x) // ELEGIR QUE PRODUCCION DE LA TABLA INICIAR
{	if (x == "E") { return 0; }
	else if (x == "X") { return 1; }
	else if (x == "T") { return 2; }
	else if (x == "Y") { return 3; }
	
}
int terminal(string &ter)
{	if (ter == "int") { return 0; }
	else if (ter == "*") { return 1; }
	else if (ter == "+") { return 2; }
	else if (ter == "(") { return 3; }
	else {
			return 5;
		}
}
bool coincidencia(string a, string t[])
{
	for (int i = 0; i < 4; i++)
	{
		if (a == t[i]) {
			return 1;
		}
	}
	return 0;
}
void insercion_pila(string pr, string sint[])  // E  -  int //
{

	int n_pr = iniciar(pr); // 0 -E // 1 - X // 2 - T // 3 - Y
	string* ptr = NULL;		// inciamos el puntero a NULL
	ptr = sint;             //apuntamos al comienzo del array sint --> "int"
	int nu_t = terminal(*ptr); //int - 0  /// * - 1

	/*cout << pr << endl;
	cout << n_pr << " " << nu_t << endl;
	cout << *ptr << endl;*/
	string aux;
	
		switch (nu_t)
		{

		case 0: {
			pila[pos_ac].push_back(pr); //			 pila[0](E)
			pila[pos_ac].push_back("$"); //          pila[0](E $)
			pos_ac++;					//			 pila[1]( )

			cout << "pos pila inicial: " << pos_ac << endl;
			while (pr != "n"||*ptr != "\0")      //E != $  y int != nulo
			{	//INGRESAMOS LAS PRODUCCIONES DEL vector INT A LA PILA 
				for (int i = 0; i < _int[n_pr].size(); i++)   // n_pr E= 0  {t,x}  //  n_pr T=2 {int, y}
				{
					pila[pos_ac].push_back(_int[n_pr][i]);	 //pila[1](T X)			//	pila[2] (int Y $ )
				}
				pila[pos_ac].push_back("$");				 //pila[1](T X $)    //pila[2] (int Y $)
				cout << pila[pos_ac][0] << " ";
				cout << pila[pos_ac][1] << " ";
				cout << pila[pos_ac][2] << endl;
				//VERIFICAMOS SI EXISTE UN TERMINAL EN LA PILA 
				bool similar = coincidencia(pila[pos_ac][0], termi);
				if (similar)
				{
					pila[pos_ac].erase(pila[pos_ac].begin());
					pr = pila[pos_ac][0];
					//pos_ac++;
					ptr++;
					nu_t = terminal(*ptr++);
					break;
				}
				else {
					pr = pila[pos_ac][0]; // T
					
						n_pr = iniciar(pr);		//
						
								 

						pos_ac++;				//2

				}

				break;
			}/*FIN DE WHILE*/
			cout << "pr " << pr << endl;
			cout << "n_pr" << n_pr << endl;
			cout << "pos pila final: " << pos_ac << endl;
			insercion_pila(pr, sint);
		}

			  break;

		case 1: {cout << " ";
		}
			  break;

		case 2: {cout << "hola 2 " << endl;
		}
			  break;
		case 5: break;
		}/*fin de switch*/
	
}/*fin de funcion*/
int main()
{	
	
	
	insercion_pila("E",sint);
	
	return 0;
}
