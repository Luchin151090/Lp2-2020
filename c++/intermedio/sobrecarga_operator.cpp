#include<iostream>
using namespace std;
class G;
class C 
{	public: 
		C(){z=0;}
		C(int _z){z=_z;}
		friend C operator+(C &s1,G &s2);
		C operator-(C &s2);
		C operator*(C &s1);
		C operator/(C &s1);
		bool operator==(C &s2);
		C operator+=(C &s1);
		C operator-=(C &s1);
		void show(){cout<<z<<endl;	}
	private:
		int z;
};

C C::operator-(C &s2)
{	C aux;
	aux.z=z-s2.z;
	return aux;
}
C C::operator*(C &s1)
{
	C aux;
	aux.z=z*s1.z;
	return aux;
}
bool C::operator==(C &s2)
{
	if(z==s2.z)
	{
		return 1;
	}
	else
		return 0;
}
C C::operator+=(C  &s1)
{	C aux;
	aux.z=z+=s1.z;
	return aux;
}
C C::operator-=(C &s1)
{	C aux;
	aux.z=z-=s1.z;
	return aux;
}
class G : public C
{
	public:
		G (){};
		G (int _x){x=_x;}
		friend C operator+(C &s1,G &s2);
			void show(){cout<<x<<endl;	}
	private:
		int x;
};
C operator+(C &s1,G &s2)
{
	C aux;
	aux=s1.z+s2.x;
	return aux;
}
int main()
{	// 4 seria el primer operando//
	C c(203),f(9),e,d,j,k;
	G a(10),h;
	
//	d=c-f;
//	e=c+f;
//	j=c*f;
	
//	f-=c;
//	f.show();
//	c.show();
//	C ax;
//	ax=c+a;
//	ax.show();
//	

	e=f+a;
	e.show();
	
//	if(c==f) /// si sale =)
//	{
//		cout<<"iguales";
//	}
//	else
//	{cout<<"dif";
//	}
	return 0;
}
