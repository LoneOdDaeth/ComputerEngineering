#include <iostream>
#include <string>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");
int toplam=0;
for(int sayi=0;sayi<=100;sayi++){
	toplam=sayi+toplam;
}
cout<<toplam;
	return 0;
}
