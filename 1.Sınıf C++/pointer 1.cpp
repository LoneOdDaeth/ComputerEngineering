#include <iostream>
using namespace std;
int main ()
{
	int x,s1,s2,*p1,*p2,*t;
	t=&x;
	p1=&s1;
	p2=&s2;
	*p1=5;
	*p2=10;
	*t=*p1+*p2;
	
	
		cout<<"------------------------------------------------"<<endl;

	cout<<*t<<endl;   // t'nin i�indeki x'in de�eri.
	cout<<t<<endl;    // x'in adresi.
	cout<<"------------------------------------------------"<<endl;
	cout<<x<<endl;    //x'in de�eri.
	cout<<&x<<endl;   //x'in adresi.
		cout<<"------------------------------------------------"<<endl;

	cout<<s1<<endl;   //s1'in de�eri.
	cout<<s2<<endl;   //s2'nin de�eri.
		cout<<"------------------------------------------------"<<endl;

	cout<<&s1<<endl;  //s1'in adresi.
	cout<<&s2<<endl;  //s2'nin adresi.
		cout<<"------------------------------------------------"<<endl;

	
	/*
	    *t dedi�imizde ve �ncesinde t=&x gibi bir atama yapt���m�zda bu t'nin i�indeki de�erden bahseder,yani x'ten. 
	*/
	
}

