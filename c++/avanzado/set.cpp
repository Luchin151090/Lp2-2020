#include<iostream>
#include<set>
using namespace std;
int main()
{	
  //uso del insert
  set<float> s1;
	s1.insert(4.3);
	s1.insert(4.2);
	s1.insert(3.3);
	s1.insert(1.3);
	s1.insert(0.9);
	s1.insert(4.96);
	
	for(auto s : s1)
	{
		cout<<s<<endl;
	}
  cout<<endl;
  //uso del empty: realiza un bool 0 false 1 true
  cout<<"mi set esta vacio?"<<endl;
  cout<<s1.empty()<<endl;

  cout<<endl;
  //uso del size
  cout<<"el numero de elem del set ="<<s1.size()<<endl;

  //uso del max_size
  cout<<"la cap max del set ="<<s1.max_size()<<endl;

  //uso del clear
  cout<<endl;cout<<"limpiamos los elemntos"<<endl;
  s1.clear();
  for(auto s : s1)
	{
		cout<<s<<endl;
	}
cout<<endl;
  //uso del count: devuleve un bool si en la busqueda hay o no elemntos pertenecientes al set
    set<float> s2;
    set<float>::iterator i;
	s2.insert(4.3);
	s2.insert(4.2);
	s2.insert(3.3);
	s2.insert(1.3);
	s2.insert(0.9);
	s2.insert(4.96);

  for(auto s:s2)
  {
    cout<<s<<" ";
  }
  float el;
  cout<<"busque un elemnto: "<<endl;
  cin>>el;
  if(s2.count(el)!=1)
  {
    cout<<"no esta";cout<<endl;
  }
  else
    cout<<"si esta"<<endl;
//uso del find
float y;
cout<<"busque un elemnt:"<<endl;
cin>>y;
i=s2.find(y);
if(*i==3.3)
{cout<<"el valor es:"<<*i<<endl; 

}

//uso del swap
set<float> s12;
    
	s12.insert(84.3);
	s12.insert(84.2);
	s12.insert(83.3);
	s12.insert(81.3);
	s12.insert(80.9);
	s12.insert(84.96);
set<float> s22;
    
	s22.insert(4.3);
	s22.insert(4.2);
	s22.insert(3.3);
	s22.insert(1.3);
	s22.insert(0.9);
	s22.insert(4.96);

s22.swap(s12);
for(auto s:s22)
{
  cout<<s<<" ";
}
 
	return 0;
}
