#include<iostream>
using namespace std;
int main()
{
	int s,giris;
	int bosluk,yildiz;
	cout<<"giris yap= ";
	cin>>giris;
	
	yildiz=1;
	bosluk=giris-1;
	
	for(int i=0;i<giris;i++)
	{
		for(s=0;s<bosluk;s++)
		{
			cout<<" ";
		}
		for(s=0;s<yildiz;s++)
		{
			cout<<"*";
		}
		cout<<"\n";
		yildiz+=2;
		bosluk--;
	}
	
	yildiz-=4;
	bosluk=1;
	
	for(int i=0;i<giris;i++)
	{
		for(s=0;s<bosluk;s++)
		{
			cout<<" ";
		}
		for(s=0;s<yildiz;s++)
		{
			cout<<"*";
		}
		cout<<"\n";
		yildiz-=2;
		bosluk++;
    }
}
