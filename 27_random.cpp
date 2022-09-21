#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	for(int i=1;i<=5;i++){
	
	int x = rand() %25+25;
	cout<<"Rastgele sayý= "<<x<<endl;
}
	return 0;
}
