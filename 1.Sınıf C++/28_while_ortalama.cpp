#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Turkish");


int dizi[1000];
int indis = 0;
int deger = 0;
int toplam = 0;


cout << "De�er Gir: ";
cin >> deger;


while (deger < 200) {
 dizi[indis] = deger;
 toplam += deger;
 indis++;
 cout << "De�er gir. 200'den b�y�k de�er girersen d�ng� bitecek': ";
 cin >> deger;
}


float ortalama = (float)toplam / (float)indis;
cout << "Ortalama de�er= " << ortalama << endl;


for (int i = 0; i < indis; i++) {
 if (dizi[i] > ortalama) {
 cout << dizi[i] << " de�eri ortalamadan b�y�kt�r." << endl;
 }
}
}
