#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int sayilar[5];
	float toplam=0;
	float ort=0;
	for(int i=0; i<5; i++){
		cout<<"lütfen klavyeden"<<i+1<<".sayýyý girin= ";
		cin>>sayilar[i];	
		
	}
	for(int i=0;i<5;i++){
		cout<<i+1<<". sayý: "<<sayilar[i]<<endl;
				
	}
	for(int i=0;i<5;i++){
		toplam=toplam+sayilar[i];
				
	}
	cout<<"sayýlarýn toplamý: "<<toplam<<endl;
	ort=toplam/5;
	cout<<"sayýlarýn ortalamasý: "<<ort<<endl;
	return 0;
}
