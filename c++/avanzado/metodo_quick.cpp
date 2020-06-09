#include <iostream>
using namespace std;
void quicksort(int A[],int izq, int der )
{ 
    int i, j, pivot , aux; 
    i = izq; 
    j = der; 
    pivot = A[ (izq + der) /2 ]; 
    do{ 
        while( (A[i] < pivot) && (j <= der) )
        { 
            i++;
        } 
         while( (pivot < A[j]) && (j > izq) )
        { 
            j--;
        } 
         if( i <= j )
        { 
            aux = A[i]; A[i] = A[j]; A[j] = aux; 
            i++;  j--; 
        }     
    }
    while( i <= j ); 
 
    if( izq < j ) 
        quicksort( A, izq, j ); 
    if( i < der ) 
        quicksort( A, i, der ); 
}
int main()
{ 
  int a[]={5,1,4,2,3};
  quicksort(a,0,4);
  for(int i=0;i<5;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
