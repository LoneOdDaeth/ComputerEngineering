#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	long long int sayi;
	int cikdev;
	while (1)
	{
	bas:   cout<<"Sayýyý giriniz= ";
	cin>>sayi;
	
	if (sayi<2)
	{
		cout<<"Asal sayýlar 2'den baþlar !!"<<endl;
		goto bas;
	}
	
	int deneme=0;	
	for (int x=2;x<sayi;x++)
	{
		if (sayi%x==0)
		deneme++;
    }
    
    if (deneme!=0)    // deneme==1 deyince neden çalýþmýyor?
    {
	   cout<<"sayý asal deðildir! "<<endl;
       cout<<"Çýkmak için 1'e devam etmek için 2'ye basýn ";
	   cin>>cikdev;
	}
    if (deneme==0)
    {
    	cout<<"sayý asaldýr! "<<endl;
    don:    cout<<"Çýkmak için 1'e devam etmek için 2'ye basýn ";
	    cin>>cikdev;
	}
    if (cikdev==1)
    {
    	break;
	}
	if (cikdev==2)
	{
		continue;
	}
	else
	{
		cout<<"Hatalý seçim yaptýnýz !!"<<endl;
		goto don;
	}
    }
}
