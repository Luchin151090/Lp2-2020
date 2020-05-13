#include <iostream>
using namespace std;
#define MAX 3
class myarray
{
public:
myarray();
~myarray();
int operator [] (int p);
myarray operator=(myarray &c)
{
myarray aux;
aux.a=a=c.a;
return aux;
}
friend ostream &operator <<( ostream &output,myarray &x);
friend istream &operator >>( istream &input,myarray &z);
private:
int *a;
int size;
int p_entrada;
int p_salida;
};
myarray::myarray()
{
size = MAX;
a=new int[MAX];
p_entrada = 0;
p_salida = 0;
}
myarray::~myarray(){
delete[]a;
}
int myarray::operator [](int p)
{
return a[p];
}
ostream &operator<<(ostream &output,myarray &x)
{
if (x.p_salida<MAX){
output<<x.a[x.p_salida++];
}
else{
cout<<"Error el indice es mayor a la capacidad del arreglo"<<endl;
}
return output;
}
istream &operator>>(istream &input,myarray &z)
{
if (z.p_entrada>MAX){
cout<<"Error se alcanzo la maxima capacidad del arreglo"<<endl;
}
else{
input>>z.a[z.p_entrada++];
}
return input;
}
int main()
{
myarray a1;
int size=3;
//a1[size];
for(int i=0;i<size;i++)
{
cout<<"ingrese valor a[" << i << "] ";
cin>>a1;
}
cout<<endl<<"valores entrados:"<<endl;
for(int i=0;i<size;i++)
{
cout<<"a[" << i << "]= ";
cout<< a1 <<endl;
}
cout<<endl<<"***fin***"<<endl;
return 0;
}
