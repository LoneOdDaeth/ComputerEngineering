#include <iostream>
using namespace std;

void swap(int *a, int *b)

{
int bos = *a;
*a = *b;
*b = bos;
}


  int main()
{
  int sayi1=5,sayi2=19;
  
  cout<<sayi1<<"<--->";
  cout<<sayi2<<endl;
  cout<<"~~~~~~~~~"<<endl;
  
  swap(&sayi1,&sayi2);
  
  cout<<sayi1<<"<--->";
  cout<<sayi2<<endl;
}
