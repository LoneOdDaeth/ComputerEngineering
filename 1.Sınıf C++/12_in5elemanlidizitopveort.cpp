#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int sayilar[5];
	float toplam=0;
	float ort=0;
	for(int i=0; i<5; i++){
		cout<<"l�tfen klavyeden"<<i+1<<".say�y� girin= ";
		cin>>sayilar[i];	
		
	}
	for(int i=0;i<5;i++){
		cout<<i+1<<". say�: "<<sayilar[i]<<endl;
				
	}
	for(int i=0;i<5;i++){
		toplam=toplam+sayilar[i];
				
	}
	cout<<"say�lar�n toplam�: "<<toplam<<endl;
	ort=toplam/5;
	cout<<"say�lar�n ortalamas�: "<<ort<<endl;
	return 0;
}
