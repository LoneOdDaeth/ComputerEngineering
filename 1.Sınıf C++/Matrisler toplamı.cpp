#include <iostream>
using namespace std;
int main ()
{
	int a[2][3], b[2][3], c[2][3];
	int i,j;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"A MATRISI "<<i<<"-"<<j<<":";
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<"B MATRISI "<<i<<"-"<<j<<":";
			cin>>b[i][j];
		}
	}
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<endl<<endl;
	
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	}
	system("Pause");
	return 0;
}
