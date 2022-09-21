#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	for(char harf='A';harf<='Z';harf++){
		cout<<harf<<" ";
	}
	cout<<"\n";
	
	for(char harf='Z';harf>='A';harf--){
		cout<<harf<<" ";
	}
	
	return 0;
}
