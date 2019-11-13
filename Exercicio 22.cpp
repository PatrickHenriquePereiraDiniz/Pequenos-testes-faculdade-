#include <iostream>
using namespace std;
int main() {
	cout << "Programa Para Converter Temperatura de Fahrenheit para Celsius \n";
	float tempCel, tempFh;
	cout << "Digite a temperatura em Fahrenheit: ";
	cin >> tempFh;
	tempCel = (tempFh-32) * (float) 5/9 ;
	cout << "Temperatura em Celsius: " << tempCel << "\n";
	
	
		
	system ("pause");
  return 0;
}
