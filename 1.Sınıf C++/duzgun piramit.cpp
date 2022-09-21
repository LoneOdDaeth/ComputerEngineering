#include<iostream>
using namespace std;
int main()
{
    int i,j,x,k;
    cout<<"Piramit icin satir sayisini giriniz : \n";
    cin>>x;
    
    for(i=1;i<=x;i++)
        {            
		    for(j=1;  j<=x-i;  j++)
          cout<<" ";
            
            for(k=1;  k<=i+i-1;  k++)
          cout<<"*"; 
          
          cout<<endl;
          
		}       
}
