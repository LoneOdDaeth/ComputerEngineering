#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int yas=30;
	const double pi = 3.1416;
	
	cout<<"Yaþ deðiþkeninin bellekteki adresi: "<<&yas<<endl;
	cout<<"pi sabitinin bellekteki adresi: "<<&pi<<endl;
	
	int *p =&yas;
	
	cout<<"Yaþ deðiþkeninin bellekteki adresi: "<<p<<endl;
	cout<<"Yaþ deðiþkeninin Deðeri: "<<*p;
	
	
	
	return 0;
}
