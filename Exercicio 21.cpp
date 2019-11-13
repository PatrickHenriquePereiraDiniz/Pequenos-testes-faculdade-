#include <iostream>
using namespace std;
int main() {
	cout << "Programa Para Converter Velocidade \n";
	float VelMS, VelKM;
	cout << "Digite a Velocidade em M/s \n";
	cin >> VelMS;
	VelKM = VelMS * 3.6;
	cout << "Velocidade em KM: " << VelKM << "\n";

	system ("pause");
  return 0;
}

