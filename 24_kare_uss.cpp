#include <iostream>
#include <cmath>
using namespace std;
int us(int t,int u)
{
	return pow(t,u);
}


int main(){
setlocale(LC_ALL, "Turkish");
int t;
int u,x;
float y;

cout<<"Sayýyý giriniz=";
cin>>t;
cout<<"Üst giriniz=";
cin>>u;
cout<<"sonuç="<<us(t,u)<<endl;
y=(sqrt(pow(x,3)+x)+5)/3;
cout<<y;

return 0;

}
