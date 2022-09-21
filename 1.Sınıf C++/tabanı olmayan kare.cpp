#include <iostream>
using namespace std;
int main()
{
	int boyut;
	cout<<"boyut giriniz:";
	cin>>boyut;
	
	for (int x=1 ;x<=boyut ;x++)
	{
		for (int y=1 ;y<=boyut ;y++)
		{if(x==1|| y==1 || y==boyut)
			cout<<"*";
			else
			cout<<"    ";
			
		}
		cout<<endl;
	}
	
}
