#include <iostream>
#include <string>
using namespace std;
int faktorial(int x);
int faktorial2();
int sayi;


int main(){
	setlocale(LC_ALL, "Turkish");	
	cout<<"Say�y� giriniz:";
	cin>>sayi;	
	cout<<"Girilen say�n�n fakt�riyeli="<<faktorial(sayi)<<endl;
	cout<<"Girilen say�n�n fakt�riyeli="<<faktorial2()<<endl;
	return 0;
}




int faktorial(int x)
{
	int f=1;
	
	
	for(int i=1;i<=x;i++){
		f*=i;
		cout<<i<<". say�n�n fakt�riyeli="<<f<<endl;
		
	}
	return f;
}
int faktorial2()
{
	int x=1;
	
	
	for(int i=1;i<=sayi;i++){
	
		x*=i;
		cout<<i<<". say�n�n fakt�riyeli="<<x<<endl;
		
	}
	return x;
	
	
}
