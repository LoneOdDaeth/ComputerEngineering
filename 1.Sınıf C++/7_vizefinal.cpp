#include <iostream>
#include <string>
using namespace std;

int main (){
	int vize,final;
	float sonuc;
	setlocale(LC_ALL, "Turkish");
	cout<<"Vize notu:";
	cin>>vize;
	cout<<"Final notu:";
	cin>>final;
	sonuc=vize*0.4+final*0.6;
	cout<<"Sonucunuz"<<sonuc<<endl;
	
	if(sonuc>=60) {
	cout<<"geçtiniz"<<endl;}
	
	else 	
	cout<<"Kaldýnýz";
			

	return 0;
}
