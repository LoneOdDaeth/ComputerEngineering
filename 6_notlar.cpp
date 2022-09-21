#include <iostream>
using namespace std;
int main (){
	int notlar [2][2];	
	cout<<"1.dersin ilk notu:";
	cin>>notlar[0][0];
	cout<<"1.dersin ikinci notu:";
	cin>>notlar[0][1];
	cout<<"2.dersin ilk notu:";
	cin>>notlar[1][0];
	cout<<"2.dersin ikinci notu:";
	cin>>notlar[1][1];

	cout<<"1. dersin notlarý:"<<notlar[0][0]<<" "<<notlar[0][1]<<endl;
	cout<<"2. dersin notlarý:"<<notlar[1][0]<<" "<<notlar[1][1]<<endl;
	
	return 0;
}
