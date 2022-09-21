#include <iostream>
#include <string>
using namespace std;
double Alan(double r);

int main(){
	double cevre=0;
	double yaricap=0;
	setlocale(LC_ALL, "Turkish");
	cout<<"Dairenin yarýçapýný giriniz:";
	cin>>yaricap;
	cout<<"Dairenin alaný="<< Alan (yaricap)<<endl	;
	cevre=6.28*yaricap;
	cout<<"Dairenin Çevresi="<< cevre	;
	
	
	return 0;
}

double Alan(double r)
{
	double pi=3.14;
	return pi*r*r;
}
