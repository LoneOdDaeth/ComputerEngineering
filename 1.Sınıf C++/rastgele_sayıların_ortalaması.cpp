#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
  srand(time(0));
  int toplam=0;	
  for(int i=0;i<10;i++)
  {
  	int a=1+rand()%100;
  	toplam=toplam+a;
  	cout<<a<<endl;
  }
  cout<<"ortalamalarý="<<(float)toplam/10<<endl;
  system("pause");
}
