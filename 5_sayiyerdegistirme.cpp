#include <iostream>
using namespace std;
int main (){
	int sayi1,sayi2,bos;	
	cout<<"say� 1:";
	cin>>sayi1;
	cout<<"say� 2:";
	cin>>sayi2;//sa�daki ifade sola aktar�l�r
	bos=sayi2;
	sayi2=sayi1;
	sayi1=bos;
	cout<<"say� 1:"<<sayi1<<endl;
	cout<<"say� 2:"<<sayi2<<endl;
	
	return 0;
}
