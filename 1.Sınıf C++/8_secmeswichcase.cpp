#include <iostream>
#include <string>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	float sayi1,sayi2;
	int secim;
	cout<<"l�tfen 1.say�y� giriniz:";
	cin>>sayi1;
	cout<<"l�tfen 2.say�y� giriniz:";
	cin>>sayi2;
		cout<<"l�tfen i�lemi se�in\n";
	cout<<"[1] Toplama\n";
	cout<<"[2] ��karma\n";
	cout<<"[3] �arpma\n";
	cout<<"[4] B�lme\n";
	cout<<"l�tfen yukar�daki i�lemlerden birini se�iniz:";
	cin>>secim;
	switch(secim)
	{
		case 1:
		cout<<"toplama i�lemi:"<<sayi1+sayi2;
		break;
		case 2:
		cout<<"��karma i�lemi:"<<sayi1-sayi2;
		break;
		
		case 3:
		cout<<"�arpma i�lemi:"<<sayi1*sayi2;
		break;	
		
		case 4:	
		cout<<"B�lme i�lemi:"<<sayi1/sayi2;
		break;
		
		default:
			cout<<"l�tfen men�deki say�lardan se�im yap�n";
			break;
			
	}

	return 0;
}
