#include <iostream>
using namespace std;

void yazyaz(int sayi)
{
	if (sayi>=1 && sayi<=999)
	{
		switch(sayi/100)
		{
		case 0:
			cout<<"";
			break;
		case 1:
			cout<<"yüz ";
			break;
		case 2:
			cout<<"ikiyüz ";
			break;
		case 3:
			cout<<"üçyüz ";
			break;
		case 4:
			cout<<"dörtyüz ";
			break;
		case 5:
			cout<<"beþyüz ";
			break;
		case 6:
			cout<<"altýyüz ";
			break;
		case 7:
			cout<<"yediyüz ";
			break;
		case 8:
			cout<<"sekizyüz ";
			break;
	    case 9:
			cout<<"dokuzyüz ";
			break;
		}
		switch((sayi%100)/10)
		{
		case 0:
			cout<<"";
			break;
		case 1:
			cout<<"on ";
			break;
		case 2:
			cout<<"yirmi ";
			break;
		case 3:
			cout<<"otuz ";
			break;
		case 4:
			cout<<"kýrk ";
			break;
		case 5:
			cout<<"elli ";
			break;
		case 6:
			cout<<"altmýþ ";
			break;
		case 7:
			cout<<"yetmiþ ";
			break;
		case 8:
			cout<<"seksen ";
			break;
	    case 9:
			cout<<"doksan ";
			break;
		}
		switch((sayi%100)%10)
		{
		case 0:
			cout<<"";
			break;
		case 1:
			cout<<"bir";
			break;
		case 2:
			cout<<"iki";
			break;
		case 3:
			cout<<"üç";
			break;
		case 4:
			cout<<"dört";
			break;
		case 5:
			cout<<"beþ";
			break;
		case 6:
			cout<<"altý";
			break;
		case 7:
			cout<<"yedi";
			break;
		case 8:
			cout<<"sekiz";
			break;
	    case 9:
			cout<<"dokuz";
			break;
		}
	}

}

int main ()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	bas:cout<<"Lütfen yazý ile yazýlmasýný istediðiniz sayýyý rakamsal olarak giriniz (1-999)= ";
	cin>>sayi;
	
	if (sayi<1 || sayi>999){
	cout<<"Lütfen 1 ve 999 arasý bir sayý giriniz !!"<<endl;
	goto bas;}
	
	yazyaz(sayi);
}
