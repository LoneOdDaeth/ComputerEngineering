#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL, "Turkish");
	float mynumbers [8] = {34,69,93,111,158,7,5,6};
	cout<<"Dizinin ilk eleman�:"<<mynumbers[0]<<endl;
	cout<<"Dizinin ikinci eleman�:"<<mynumbers[1]<<endl;
	cout<<"Dizinin ���nc� eleman�:"<<mynumbers[2]<<endl;
	cout<<"Dizinin d�rd�nc� eleman�:"<<mynumbers[3]<<endl;
	cout<<"Dizinin be�inci eleman�:"<<mynumbers[4]<<endl;
	cout<<"Dizinin alt�nc� eleman�:"<<mynumbers[5]<<endl;
	cout<<"Dizinin yedinci eleman�:"<<mynumbers[6]<<endl;
	cout<<"Dizinin sekizinci eleman�:"<<mynumbers[7]<<endl;
	cout<<"dizinin elemanlar�n�n toplam�"<<mynumbers[0]+mynumbers[1]+mynumbers[2]+mynumbers[3]+mynumbers[4]+mynumbers[5]+mynumbers[6]+mynumbers[7]<<endl;
   	cout<<"dizinin elemanlar�n�n ortalamas�"<<(mynumbers[0]+mynumbers[1]+mynumbers[2]+mynumbers[3]+mynumbers[4]+mynumbers[5]+mynumbers[6]+mynumbers[7])/8;	
	
	return 0;
}
