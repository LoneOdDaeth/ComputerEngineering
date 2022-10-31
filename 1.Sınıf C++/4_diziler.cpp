#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "Turkish");
	float mynumbers [8] = {34,69,93,111,158,7,5,6};
	cout<<"Dizinin ilk elemaný:"<<mynumbers[0]<<endl;
	cout<<"Dizinin ikinci elemaný:"<<mynumbers[1]<<endl;
	cout<<"Dizinin üçüncü elemaný:"<<mynumbers[2]<<endl;
	cout<<"Dizinin dördüncü elemaný:"<<mynumbers[3]<<endl;
	cout<<"Dizinin beþinci elemaný:"<<mynumbers[4]<<endl;
	cout<<"Dizinin altýncý elemaný:"<<mynumbers[5]<<endl;
	cout<<"Dizinin yedinci elemaný:"<<mynumbers[6]<<endl;
	cout<<"Dizinin sekizinci elemaný:"<<mynumbers[7]<<endl;
	cout<<"dizinin elemanlarýnýn toplamý"<<mynumbers[0]+mynumbers[1]+mynumbers[2]+mynumbers[3]+mynumbers[4]+mynumbers[5]+mynumbers[6]+mynumbers[7]<<endl;
   	cout<<"dizinin elemanlarýnýn ortalamasý"<<(mynumbers[0]+mynumbers[1]+mynumbers[2]+mynumbers[3]+mynumbers[4]+mynumbers[5]+mynumbers[6]+mynumbers[7])/8;	
	
	return 0;
}
