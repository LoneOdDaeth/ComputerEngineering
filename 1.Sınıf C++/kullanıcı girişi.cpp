#include <iostream>
using namespace std;
int main ()
{
setlocale(LC_ALL,"Turkish");
	
	string sys_password="123";
	string sys_username="qwerty";
	
	string username,password;
	
	cout<<"kullanýcý adýný gir= ";
	cin>>username;
	cout<<"sifreni gir= ";
	cin>>password;
	
	if (username!=sys_username||password!=sys_password)
	cout<<"Kullanýcý adý veya parola hatalý !!";
	if (username==sys_username&&password==sys_password)
	cout<<"Hoþgeldiniz !!";
	
	
}
