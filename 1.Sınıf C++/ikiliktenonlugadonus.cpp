#include <iostream>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"Turkish");
	
	cout<<"/----------------------------\\"<<endl;
	cout<<"| �kilik-Onluk Say� D�n���m� |"<<endl;
	cout<<"\\----------------------------/"<<"\n\n";
	
	int x=0;
	int onluk[100],sonuc[100];
	long long int a=1,cevap=0,sayi;
	
	cout<<"�kilik tabanda bir say� giriniz= ";
	cin>>sayi;
	
	while (sayi>0)
	{
		onluk[x]=sayi%10;
		sayi=sayi/10;
		x++;
	}
	
	for (int y=0;y<=x;y++)
	{
		sonuc[y]=a*onluk[y];
		a=a*2;
	}
	
	for (int z=0;z<=x;z++)
	{
		cevap=cevap+sonuc[z];
	}
	
	cout<<"Girdi�iniz say�n�n onluk tabandaki de�eri= "<<cevap;
	cout<<endl;
	system("pause");
}
