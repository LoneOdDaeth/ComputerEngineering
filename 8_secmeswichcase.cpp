#include <iostream>
#include <string>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	float sayi1,sayi2;
	int secim;
	cout<<"lütfen 1.sayýyý giriniz:";
	cin>>sayi1;
	cout<<"lütfen 2.sayýyý giriniz:";
	cin>>sayi2;
		cout<<"lütfen iþlemi seçin\n";
	cout<<"[1] Toplama\n";
	cout<<"[2] Çýkarma\n";
	cout<<"[3] Çarpma\n";
	cout<<"[4] Bölme\n";
	cout<<"lütfen yukarýdaki iþlemlerden birini seçiniz:";
	cin>>secim;
	switch(secim)
	{
		case 1:
		cout<<"toplama iþlemi:"<<sayi1+sayi2;
		break;
		case 2:
		cout<<"Çýkarma iþlemi:"<<sayi1-sayi2;
		break;
		
		case 3:
		cout<<"Çarpma iþlemi:"<<sayi1*sayi2;
		break;	
		
		case 4:	
		cout<<"Bölme iþlemi:"<<sayi1/sayi2;
		break;
		
		default:
			cout<<"lütfen menüdeki sayýlardan seçim yapýn";
			break;
			
	}

	return 0;
}
