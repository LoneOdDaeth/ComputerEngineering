#include <iostream>
#include <string>
using namespace std;
int sayi;

int faktorial(int s)
{
	
	
	if(s==1 ||s==0) {return 1;}
	else return s*faktorial(s-1);
}




int main(){

	setlocale(LC_ALL, "Turkish");	
	cout<<"Sayýyý giriniz:";
	cin>>sayi;	
	cout<<"Girilen sayýnýn faktöriyeli="<<faktorial(sayi)<<endl;
	return 0;

}




