#include <iostream>
using namespace std;
int main (){
	int sayi1,sayi2,bos;	
	cout<<"sayý 1:";
	cin>>sayi1;
	cout<<"sayý 2:";
	cin>>sayi2;//saðdaki ifade sola aktarýlýr
	bos=sayi2;
	sayi2=sayi1;
	sayi1=bos;
	cout<<"sayý 1:"<<sayi1<<endl;
	cout<<"sayý 2:"<<sayi2<<endl;
	
	return 0;
}
