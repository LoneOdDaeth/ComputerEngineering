#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int dizi [2][3];
	for (int i=0;i<2;i++)
	 for (int j=0;j<3;j++)
	 {cout<<i+1<<". öðrencinin "<<j+1<<". dersini giriniz=";
	 cin>>dizi[i][j];
	 }
	
	for (int i=0;i<2;i++)
	 for (int j=0;j<3;j++)
	 {cout<<i+1<<". öðrencinin "<<j+1<<". dersini= "<<dizi[i][j]<<endl;
	 
	 }
	
	return 0;
}
