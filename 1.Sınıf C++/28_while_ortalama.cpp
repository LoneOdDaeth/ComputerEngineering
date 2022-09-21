#include <iostream>
using namespace std;
int main() {
setlocale(LC_ALL, "Turkish");


int dizi[1000];
int indis = 0;
int deger = 0;
int toplam = 0;


cout << "Deðer Gir: ";
cin >> deger;


while (deger < 200) {
 dizi[indis] = deger;
 toplam += deger;
 indis++;
 cout << "Deðer gir. 200'den büyük deðer girersen döngü bitecek': ";
 cin >> deger;
}


float ortalama = (float)toplam / (float)indis;
cout << "Ortalama deðer= " << ortalama << endl;


for (int i = 0; i < indis; i++) {
 if (dizi[i] > ortalama) {
 cout << dizi[i] << " deðeri ortalamadan büyüktür." << endl;
 }
}
}
