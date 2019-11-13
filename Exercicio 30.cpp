#include <iostream>
using namespace std;
int main() {
	cout << "\t\tExercicio 30\n";
	float h, pesoid;
	string Sexo;
	
	cout << "Informe sua altura: \n";
	cin >> h; 
	
	cout << "Informe seu genero: \n";
	cin >> Sexo; 
	
	
	if(Sexo == "M")
	{
	 pesoid=(72.7 * h) - 58;
	 cout << "Seu peso ideal e: "<<pesoid<<"Kg \n";
	}
	else 
	{
	 pesoid=(62.1 * h) - 44.7;
	 cout << "Seu peso ideal e: "<<pesoid<<" Kg \n";
	}
		
	
	
	
	system ("pause");
 return 0;
}



