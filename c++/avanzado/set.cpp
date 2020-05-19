#include<iostream>
#include<set>
using namespace std;
int main()
{	set<float> s1;
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
	return 0;
}
