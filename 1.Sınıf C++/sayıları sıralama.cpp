#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
int main()
{
	srand (time(NULL));
	setlocale(LC_ALL,"Turkish");
	int sayisayisi;
	cout<<"Kac adet sayý olsun= ";
	cin>>sayisayisi;//rastgele kac sayý olacagýný kullanýcýdan alýyoruz

	int sayilar[sayisayisi],dsayi;
	
	for (int i=0;i<sayisayisi;i++)//rastgele olarak sayý tanýmladýk
	{
		sayilar[i]=1+rand()%100;
		cout<<sayilar[i]<<endl;
	}
	for (int i=0;i<sayisayisi;i++)//ic ice forda sayýlarý dizi icerisinde yer degiþtirerek sýraya koyduk
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
	for (int k=0;k<sayisayisi;k++)//sýralý bir þekilde yazdýrdýk
	{
		cout<<sayilar[k];
		if(k!=sayisayisi-1)//en son haricinde < iþaret koyuyor
		cout<<"<";
	}
}
