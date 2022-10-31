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
		
		cout << "Adým " + ad << " ve yaþým ";
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
	kadin.ad = "Ayþe";
	kadin.yas = 28;
	
	erkek.bilgi();
	kadin.bilgi();
}
