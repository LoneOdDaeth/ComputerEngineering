#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int yas=30;
	const double pi = 3.1416;
	
	cout<<"Ya� de�i�keninin bellekteki adresi: "<<&yas<<endl;
	cout<<"pi sabitinin bellekteki adresi: "<<&pi<<endl;
	
	int *p =&yas;
	
	cout<<"Ya� de�i�keninin bellekteki adresi: "<<p<<endl;
	cout<<"Ya� de�i�keninin De�eri: "<<*p;
	
	
	
	return 0;
}
