#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
double x,y;
cout<<"Bir sayi giriniz= ";
cin>>x;
y=(x+sqrt(pow(x,4)-8*x))/(x-3);
cout<<x<<" sayisi icin y degeri= "<<y<<'\n';
	
}
