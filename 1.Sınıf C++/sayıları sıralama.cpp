#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
int main()
{
	srand (time(NULL));
	setlocale(LC_ALL,"Turkish");
	int sayisayisi;
	cout<<"Kac adet say� olsun= ";
	cin>>sayisayisi;//rastgele kac say� olacag�n� kullan�c�dan al�yoruz

	int sayilar[sayisayisi],dsayi;
	
	for (int i=0;i<sayisayisi;i++)//rastgele olarak say� tan�mlad�k
	{
		sayilar[i]=1+rand()%100;
		cout<<sayilar[i]<<endl;
	}
	for (int i=0;i<sayisayisi;i++)//ic ice forda say�lar� dizi icerisinde yer degi�tirerek s�raya koyduk
	{
		for (int j=0;j<sayisayisi;j++)
		{
			if(sayilar[j]>sayilar[j+1])
			{
				dsayi=sayilar[j];
				sayilar[j]=sayilar[j+1];
				sayilar[j+1]=dsayi;
			}
		}
	}
	for (int k=0;k<sayisayisi;k++)//s�ral� bir �ekilde yazd�rd�k
	{
		cout<<sayilar[k];
		if(k!=sayisayisi-1)//en son haricinde < i�aret koyuyor
		cout<<"<";
	}
}
