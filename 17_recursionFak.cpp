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
	cout<<"Say�y� giriniz:";
	cin>>sayi;	
	cout<<"Girilen say�n�n fakt�riyeli="<<faktorial(sayi)<<endl;
	return 0;

}




