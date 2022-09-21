#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	
	
	int sayi1,sayi2;
	char islem;
	cout<<"birinci sayýyý girin:";
	cin>>sayi1;
	cout<<"ikinci sayýyý girin:";
	cin>>sayi2;
	cout<<"yapýlacak iþlemi girin:";
	cin>>islem;
	switch(islem)
	{
		case'+':
		cout<<"Ýþlem sonucu= "<<sayi1+sayi2;
		break;
		case'-':
		cout<<"Ýþlem sonucu= "<<sayi1-sayi2;
		break;	
		
		
		}
	return 0;
}
