#include <iostream>
using namespace std;
int main(){
	int sayi,i,j;
	setlocale(LC_ALL, "Turkish");
	cout<<"Kenar uzunluðunu giriniz:";
	cin>>sayi;
	for(i=1; i<=sayi; i++)
	{
		for(j=1; j<=sayi; j++)
		{
			if (i==1)
			cout<<"* ";
			
			else if(i==sayi )
			cout<<"* ";
			
			else if( j==1)
			cout<<"* ";
			
			else if(j==sayi)
			cout<<"* ";
			
			else 
			cout<<"  ";
			
		}
		cout<<"\n";
	}
	
		
	
	
	return 0;
}
