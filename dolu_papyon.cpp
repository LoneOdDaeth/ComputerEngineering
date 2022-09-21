#include <iostream>
using namespace std;
int main()
{
	int boyut;
	cout<<"Boyut giriniz= ";
	cin>>boyut;
	
	for (int a=1;a<=boyut/2;a++)
	{
		for(int b=1;b<=boyut;b++)
		{
			if(b<=a||boyut+1<=a+b)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	
	for (int y=(boyut/2)+1;y<=boyut;y++)
	{
		for (int x=1;x<=boyut;x++)
		{
			if (x+y<=boyut+1||x>=y)
			cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	
	
	

}
