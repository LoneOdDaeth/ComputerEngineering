#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Turkish");
int saatler, dakikalar;
long long int saniyeler;
cout << "Saniye Giriniz:";
cin >> saniyeler;

saatler = saniyeler / 3600; 

saniyeler = saniyeler % 3600;
dakikalar = saniyeler / 60; 
saniyeler = saniyeler % 60;
cout << saatler << " sa, " << dakikalar << " dk, "<< saniyeler << " sny\n";
system("pause");
}
