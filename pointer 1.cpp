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

	cout<<*t<<endl;   // t'nin içindeki x'in deðeri.
	cout<<t<<endl;    // x'in adresi.
	cout<<"------------------------------------------------"<<endl;
	cout<<x<<endl;    //x'in deðeri.
	cout<<&x<<endl;   //x'in adresi.
		cout<<"------------------------------------------------"<<endl;

	cout<<s1<<endl;   //s1'in deðeri.
	cout<<s2<<endl;   //s2'nin deðeri.
		cout<<"------------------------------------------------"<<endl;

	cout<<&s1<<endl;  //s1'in adresi.
	cout<<&s2<<endl;  //s2'nin adresi.
		cout<<"------------------------------------------------"<<endl;

	
	/*
	    *t dediðimizde ve öncesinde t=&x gibi bir atama yaptýðýmýzda bu t'nin içindeki deðerden bahseder,yani x'ten. 
	*/
	
}

