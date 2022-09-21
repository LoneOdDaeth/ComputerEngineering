#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	int notlar [9][2];
	for(int i=0;i<9;i++){
		for(int j=0;j<2;j++){
			cout<<i+1<<".ci dersin "<<j+1<<".notunu girin =";
			cin>>notlar[i][j];		
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<2;j++){
			cout<<i+1<<".ci dersin "<<j+1<<".notu ="<<notlar[i][j]<<endl;
					
		}
	}
	
	return 0;
}
