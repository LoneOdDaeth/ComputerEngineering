#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	long long int sayi;
	int cikdev;
	while (1)
	{
	bas:   cout<<"Say�y� giriniz= ";
	cin>>sayi;
	
	if (sayi<2)
	{
		cout<<"Asal say�lar 2'den ba�lar !!"<<endl;
		goto bas;
	}
	
	int deneme=0;	
	for (int x=2;x<sayi;x++)
	{
		if (sayi%x==0)
		deneme++;
    }
    
    if (deneme!=0)    // deneme==1 deyince neden �al��m�yor?
    {
	   cout<<"say� asal de�ildir! "<<endl;
       cout<<"��kmak i�in 1'e devam etmek i�in 2'ye bas�n ";
	   cin>>cikdev;
	}
    if (deneme==0)
    {
    	cout<<"say� asald�r! "<<endl;
    don:    cout<<"��kmak i�in 1'e devam etmek i�in 2'ye bas�n ";
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
		cout<<"Hatal� se�im yapt�n�z !!"<<endl;
		goto don;
	}
    }
}
