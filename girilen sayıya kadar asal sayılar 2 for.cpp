#include <iostream>
using namespace std;

int main()
{
	long long int x,j=0,k,l=0;
	
	setlocale (LC_ALL,"Turkish");
	cout<<"kaça kadar olan asal sayýlar gözüksün= \n";
	cin>>x;
	
	for(int i=2;i<x;i++)
	{
		for(k=2;k<i;k++)
		{
		if(i%k==0)
		l=1;
		}
		if(l==0)
			{
			cout<<i<<" sayý asaldýr \n";
			}
		l=0;
		
	}
system("pause");
}
