#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL,"Turkish");
	char kelime1[100],kelime2[100],boskume[100];
	
	cout<<"Ýlk kelimeni yaz= ";
	cin>>kelime1;
	
	cout<<"Ýkinci kelimeni yaz= ";
	cin>>kelime2;
	
	cout<<"--> "<<kelime1<<endl;
	cout<<"--> "<<kelime2<<endl;
	
	cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
	
	for (int x=0;x<100;x++)
	{
		boskume[x]=kelime1[x];
	}
	for (int y=0;y<100;y++)
	{
		kelime1[y]=kelime2[y];
	}
	for (int z=0;z<100;z++)
	{
		kelime2[z]=boskume[z];
	}
	
	cout<<"--> "<<kelime1<<endl;
	cout<<"--> "<<kelime2<<endl;
}
