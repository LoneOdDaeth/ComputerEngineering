#include <iostream>
#include <string>
using namespace std;
double Alan(double r);

int main(){
	double cevre=0;
	double yaricap=0;
	setlocale(LC_ALL, "Turkish");
	cout<<"Dairenin yar��ap�n� giriniz:";
	cin>>yaricap;
	cout<<"Dairenin alan�="<< Alan (yaricap)<<endl	;
	cevre=6.28*yaricap;
	cout<<"Dairenin �evresi="<< cevre	;
	
	
	return 0;
}

double Alan(double r)
{
	double pi=3.14;
	return pi*r*r;
}
