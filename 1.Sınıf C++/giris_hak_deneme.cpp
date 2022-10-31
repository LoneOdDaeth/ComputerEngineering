#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	string sifre="merhaba123";
	string giris;
	int hak=3;
	
	cout<<"Lütfen þifrenizi giriniz= "<<endl;
	
	for(int x=1;x<4;x++)
	{   
	    cout<<"--> ";
	    cin>>giris;
	    
	    if (giris==sifre) 
		{
			cout<<"Hosgeldiniz !!";
			break;
		}
	    else hak--;
	    if (hak==0)
	    {
	    	cout<<"Giriþ haklarýnýz bitti gg !!!";
	    	break;
		}	
	}
}
