#include<iostream>
using namespace std;
class Puntox;
class Punto
{
	public:
		Punto(){x=0; y=0; z=0;}
		Punto(float _x,float _y,float _z){x=_x; y=_y; z=_z;}
	
		void show(){cout<<x<<" "<<y<<" "<<z<<endl;	};
		Punto operator + (Punto &a);
		friend Punto operator + (Punto &a,Puntox &b);
	private:
		float x,y,z;		
};
Punto Punto:: operator +(Punto &a)
{
	Punto aux;
	aux.x=x+a.x;
	aux.y=y+a.y;
	aux.z=z+a.z;
	return aux;
	
}
class Puntox
{
	public:
		Puntox(){xx=0; yy=0; zz=0;}
		Puntox(float _xx,float _yy,float _zz){xx=_xx; yy=_yy; zz=_zz;}
	
		void show(){cout<<xx<<" "<<yy<<" "<<zz<<endl;	};
		Puntox operator + (Puntox &a);
		friend Punto operator + (Punto &a,Puntox &b);
	private:
		float xx,yy,zz;		
};
Punto operator+(Punto &a,Puntox &b)
{
	Punto aux;
	aux.x=a.x+b.xx;
	aux.y=a.y+b.yy;
	aux.z=a.z+b.zz;
	return aux;
}
int main()
{
	Punto a(2.3,5,6),c;
	Punto b(1.3,4.0,4.0);
	c=a+b;
	c.show();
	Puntox ax(1.1,2.0,3.0),d;
	Puntox bx(1.2,3.9,1.0);
	cout<<endl;
	c=a+bx;
	c.show();
	cout<<endl;
	ax.show();
	return 0;
	
}
