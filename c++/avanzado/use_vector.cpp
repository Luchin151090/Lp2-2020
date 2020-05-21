#include <iostream>
#include <vector>
using namespace std;
int main() 
{//use operator []
  vector<int>myvec(10);
  for(int i=0;i<10;i++)
  {
    myvec[i]=i;
    cout<<myvec[i]<<endl;
  }
  cout<<endl;
  //use at : retorna una posicion especifica
  vector<int>myv;
  int n,x;
  while(n!=-1)
  {//use del push_back...aqui ingresa el elemento desde atras hacia adelante

    myv.push_back(n);
    cin>>n;
  }
  cout<<"Que posicion desea ver ?"<<endl;
  cin>>x;
  cout<<"la posicion: "<<x<<" = ";
  cout<<myv.at(x)<<endl;

//use front y back
vector<int>v;
v.push_back(5);
v.push_back(6);
v.push_back(7);cout<<endl;
cout<<"el primer elm es =";
cout<<v.front();cout<<endl;
cout<<"el ultimo elm es =";
cout<<v.back();cout<<endl;
cout<<endl;

//use insert
  vector<int>v1(4);//creo mi v de 4 elementos
  vector<int>::iterator i=v1.begin();
  i++;
  i++;
  v1.insert(i,8);//inserta un 8 en la pos 2 del vector
  for(int j=0;j<v1.size();j++)
  {
    cout<<v1[j]<<" ";
  }
  cout<<endl;
//use eraser //borra una posicion especifica
vector<int>v2;
v2.push_back(15),v2.push_back(99),v2.push_back(34),v2.push_back(105),v2.push_back(89);
v2.erase(v2.begin());
for(int i=0;i<v2.size();i++)
{
  cout<<v2[i]<<" ";
}
cout<<endl;

//use swap
vector<int>v3(2,1020);
vector<int>v4(3,3090);

v3.swap(v4);
for(int i=0;i<v3.size();i++)
{
  cout<<v3[i]<<" ";
}
cout<<endl;
cout<<endl;
//use  clear
vector<int>v6;
v6.push_back(15),v6.push_back(99),v6.push_back(34),v6.push_back(105),v6.push_back(89);
for(int i=0;i<v6.size();i++)
{
  cout<<v6[i]<<" ";
}cout<<endl;cout<<"despues del clear"<<endl;
for(int i=0;i<v6.size();i++)
{
  cout<<v6[i]<<" ";
}

  return 0;
}
