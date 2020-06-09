#include<iostream>
using namespace std;
void insertion(int a[],int n)
{

  for(i=0;i<5;i++)
  {
		pos = i; 
		aux = numeros[i];
		
		while((pos>0) && (numeros[pos-1] > aux))
    {
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
 }
 int main()
 {
    int a[]={5,2,1,4,3};
    insertion(a,5);
    for(int i=0;i<5;i++)
    { cout<<a[i]<<" ";
    }
    return 0;
 }
  
