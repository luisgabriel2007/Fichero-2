#include<iostream>
#include<fstream>
using namespace std;
int main (){
string a;
ofstream fich("ficha.txt");
cout<<"Ingrese una oracion:";
getline(cin,a);
fich<<a;
}
