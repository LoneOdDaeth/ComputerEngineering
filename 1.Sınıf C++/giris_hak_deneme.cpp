#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	string sifre="merhaba123";
	string giris;
	int hak=3;
	
	cout<<"L�tfen �ifrenizi giriniz= "<<endl;
	
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
	    	cout<<"Giri� haklar�n�z bitti gg !!!";
	    	break;
		}	
	}
}
