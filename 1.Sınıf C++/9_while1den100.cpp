#include <iostream>
#include <string>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");
int sayi=0,toplam=0,sayi1=1,toplam1=0,sayi2=0,toplam2=0;
while(sayi<=100){
	toplam=toplam+sayi;
	sayi++;
}
cout<<"sayýlarýn toplamý= "<<toplam<<endl;
while(sayi1<=100){
	toplam1=toplam1+sayi1;
	sayi1+=2;
}
cout<<"tek sayýlarýn toplamý= "<<toplam1<<endl;
while(sayi2<=100){
	toplam2=toplam2+sayi2;
	sayi2+=2;
}
cout<<"çift sayýlarýn toplamý= "<<toplam2<<endl;


	return 0;
}
