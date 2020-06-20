#include<fstream>
#include <iostream>
#include<regex>
#include<string>
using namespace std;

int main()
{
    cout << "Reconociendo lenguaje de programacion..." << endl;
    ifstream abri_a;
    string linea;
    abri_a.open("p1.txt"); ///ABRO EL ARCHIVO DEL PROGRAMA ARTIX
    if (abri_a.fail())
    {
        cout << "no se abrio" << endl;
    }
    while (getline(abri_a, linea))
    {
        cout << linea << endl;
    }
    cout << endl << endl;
    abri_a.close();
   
    ///////////////////////////////////////////DEFINO MI EXPRESION REGULAR PARA MI PROPIO LENGUAJE/////////////////////////////////////////////
    regex r1("[\"][a-z]+[\"]|[int]|[forx]|[headx]|[0-9]+.[0-9]+|[0-9]+|[printx]|[=]|[+]|[{]|[}]|[ ]|[\n]|[)]|[(]|[printx:]|[finishx]|[a-z]+[=]|[,]|[headx][(][)]|[<]|[>]|");
    regex r2("headx|yesx|elsx|whilx|forx|claxx");
    bool relacion = regex_match(linea, r1);
    string x;
    //cout << relacion << endl;
    //////////////////COMPRUEBO SI LA RELACION ENTRE MI LENGUAJE Y MI EXPRESION REGULAR ES CORRECTA///////////////////////////////////////
    if (relacion)
    {
        cout << "Lenguaje reconocido : ARTIX" << endl;
        cout << "tu gramatica es correcta"<<endl;
        
    }
    else
    {
        cout << "no hay relacion" << endl;
        cout << "no es correcta" << endl;
    }
    cout << x<<endl;
    ////////////////////////////////////ANALIZADOR SINTACTICO///////////////////////////////////////////////////////////////////////////
    //PRODUCCIONES
    
    return 0;
}
