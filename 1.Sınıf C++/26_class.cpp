#include <iostream>
#include <string>
using namespace std;

class insan
{
	public:
	string ad;
	int yas;
	
	void bilgi ()
	{
		setlocale (LC_ALL, "Turkish");
		
		cout << "Ad�m " + ad << " ve ya��m ";
		cout << yas << endl;
	}
};

int main()
{
	setlocale (LC_ALL, "Turkish");
	
	insan erkek;
	erkek.ad = "Ahmet";
	erkek.yas = 30;
	
	insan kadin;
	kadin.ad = "Ay�e";
	kadin.yas = 28;
	
	erkek.bilgi();
	kadin.bilgi();
}
