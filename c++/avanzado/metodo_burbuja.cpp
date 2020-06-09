#include<iostream>
using namespace std;
void burbuja(int a[],int n)
{ int aux=0;
  for(int i=0;i<n;i++)
  {for(int j=0;j<n-1;j++)
    { if(a[j]>a[j+1])
      { aux=a[j];
        a[j]=a[j+1];
        a[j+1]=aux;
      }
    }
  }
}
int main()
{ int a[]={5,3,4,1,2};
  burbuja(a,5);
  for(int i=0;i<5;i++)
  {cout<<a[i]<<" ";
  }
  return 0;
}
