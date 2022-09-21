#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	for (int i=1;i<999999;i++)
	{
		Sleep (100);
		system ("cls");
		
		for(int k=1;k<i;k++)
		{
			cout<<" ";
		}
		cout<<"-->";
	}
	
	
	
}
