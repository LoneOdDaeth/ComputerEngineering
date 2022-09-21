#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	int baslangic,bitis;
	don: cout<<"Ýki deðer arasý asal sayýlarý yazdýrmak için baþlangýç deðeri giriniz= ";
	cin>>baslangic;
	if(baslangic<2) 
	{
		cout<<"asal sayýlar 2'den baþlar !!"<<endl; 
		goto don;
	}
	cout<<"Ýki deðer arasý asal sayýlarý yazdýrmak için bitiþ deðeri giriniz= ";
	cin>>bitis;
	
	if (baslangic>bitis)
	{
		cout<<"Baþlangýç deðeri bitiþ deðerinden büyük olamaz !!!"<<endl;
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
	         cout<<a<<" Bir asal sayýdýr !!"<<endl;
	
	}

}
