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
			cout<<"y�z ";
			break;
		case 2:
			cout<<"ikiy�z ";
			break;
		case 3:
			cout<<"��y�z ";
			break;
		case 4:
			cout<<"d�rty�z ";
			break;
		case 5:
			cout<<"be�y�z ";
			break;
		case 6:
			cout<<"alt�y�z ";
			break;
		case 7:
			cout<<"yediy�z ";
			break;
		case 8:
			cout<<"sekizy�z ";
			break;
	    case 9:
			cout<<"dokuzy�z ";
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
			cout<<"k�rk ";
			break;
		case 5:
			cout<<"elli ";
			break;
		case 6:
			cout<<"altm�� ";
			break;
		case 7:
			cout<<"yetmi� ";
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
			cout<<"��";
			break;
		case 4:
			cout<<"d�rt";
			break;
		case 5:
			cout<<"be�";
			break;
		case 6:
			cout<<"alt�";
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
	bas:cout<<"L�tfen yaz� ile yaz�lmas�n� istedi�iniz say�y� rakamsal olarak giriniz (1-999)= ";
	cin>>sayi;
	
	if (sayi<1 || sayi>999){
	cout<<"L�tfen 1 ve 999 aras� bir say� giriniz !!"<<endl;
	goto bas;}
	
	yazyaz(sayi);
}
