#include <iostream>
using namespace std;
int main() {
	// Declaração das variaveis
	float nota_port, nota_mat, nota_dir, med_arit, med_pond;
	cout <<"\t\t\tMedia Aritmetica e Ponderada\n\n";
	// Nota de Portugues
	cout <<"Digite a nota de Portugues: ";
	cin  >> nota_port;
	
	//Nota de Matematica
	cout <<"Digite a nota de Matematica: ";
	cin  >> nota_mat;
	
	// Nota de Direito
	cout <<"Digite a nota de Direito: ";
	cin  >> nota_dir;
	
	// Calculo da Media Aritmetica
	med_arit = (nota_port + nota_mat + nota_dir)/ 3;
	cout << "Media Aritmetica: " <<med_arit<<"\n";
	
	// Calculo da Media Ponderada
	med_pond = (nota_port *2 + nota_mat * 4 + nota_dir * 3 )/ 9;
	cout << "Media Ponderada: " <<med_pond<< "\n";



	system ("pause");
	return 0;
}

