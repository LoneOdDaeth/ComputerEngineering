#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int baslangic,bitis;
	don: cout<<"�ki de�er aras� asal say�lar� yazd�rmak i�in ba�lang�� de�eri giriniz= ";
	cin>>baslangic;
	if(baslangic<2) 
	{
		cout<<"asal say�lar 2'den ba�lar !!"<<endl; 
		goto don;
	}
	cout<<"�ki de�er aras� asal say�lar� yazd�rmak i�in biti� de�eri giriniz= ";
	cin>>bitis;
	
	if (baslangic>bitis)
	{
		cout<<"Ba�lang�� de�eri biti� de�erinden b�y�k olamaz !!!"<<endl;
		goto don;
	}
	
	for (int a=baslangic;a<=bitis;a++)
	{
		 int sayac=0;
		 for (int x=2;x<=a;x++)
	         {
		         if (a%x==0)
		         sayac++;
	         }
	         if(sayac==1)
	         cout<<a<<" Bir asal say�d�r !!"<<endl;
	
	}

}
