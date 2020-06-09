#include<iostream>
using namespace std;
void seleccion(int a[],int n)
{

	int aux,min;
	for(int i=0;i<n;i++)
  {
		min = i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		aux = a[i];
		a[i] = a[min];
		a[min] = aux;
	}
 }
  int main()
  { 
    int a[] = {3,4,5,2,1};
    seleccion(a,5);
    for(int i=0;i<5;i++)
    {cout<<a[i]<<" ";
    }
    return 0;
  }
