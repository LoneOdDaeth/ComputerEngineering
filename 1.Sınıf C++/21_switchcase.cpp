#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	
	
	int sayi1,sayi2;
	char islem;
	cout<<"birinci say�y� girin:";
	cin>>sayi1;
	cout<<"ikinci say�y� girin:";
	cin>>sayi2;
	cout<<"yap�lacak i�lemi girin:";
	cin>>islem;
	switch(islem)
	{
		case'+':
		cout<<"��lem sonucu= "<<sayi1+sayi2;
		break;
		case'-':
		cout<<"��lem sonucu= "<<sayi1-sayi2;
		break;	
		
		
		}
	return 0;
}
