#include <iostream>
#include<cstdlib>
using namespace std;

int main(){
	setlocale(LC_ALL, "Turkish");
	
	int *s1=(int *) malloc(sizeof(int));
    int *s2=(int *) malloc(sizeof(int));
    int gecici;
    
    
	cout<<"1. sayýyý girin: ";
	cin>>*s1;
	cout<<"2. sayýyý girin: ";
	cin>>*s2;
	

	gecici=*s1;
	*s1=*s2;
	*s2=gecici;
	
	
	cout<<"1. sayý= "<<*s1<<endl<<" 2. sayý= "<<*s2<<endl;


	
	
	
	return 0;
}
