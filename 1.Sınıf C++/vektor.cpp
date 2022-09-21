#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> V;
cout<<"boyutu= "<< V.size()<< endl;
V.push_back(10);
V.push_back(25);
V.push_back(32);
cout<<"boyutu= "<< V.size()<< endl;
cout << V[0] << " " <<V[1] << " " << V[2]<< endl;
}
