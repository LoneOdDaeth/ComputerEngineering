#include <iostream>
using namespace std;

int fonk(int n)
{
	int sonuc=1;
	if(n==1)
	return 1;
	else
	sonuc=n*fonk(n-1);
	return sonuc;
}

int main ()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	cout<<"Fakt�riyelinin al�nmas�n� istedi�iniz say�y� giriniz= ";
	cin>>sayi;
	cout<<"--> "<<fonk(sayi);
	cout<<endl;
	system("break");
}
