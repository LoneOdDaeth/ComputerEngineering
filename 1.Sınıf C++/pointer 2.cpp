#include <iostream>
using namespace std;
int main ()
{
	int x=5,*p1,**p2;
	p1=&x;
	p2=&p1;
	cout<<x<<endl;
	cout<<p1<<endl;
	cout<<p2<<endl;
	cout<<*p1<<endl;
	cout<<*p2<<endl;
	cout<<**p2<<endl;   //p2'nin i�indekinin i�indeki. Yani 5...
}
