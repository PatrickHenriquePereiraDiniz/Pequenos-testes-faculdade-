#include <iostream>
using namespace std;
int main() {
	string Nome, Sexo;
	int Idade;
	float Salario;
	
	cout << "\t\t\t Exercicio 29\n\n";
	cout << "Informe o seu nome: \n";
	cin >> Nome;
	
	cout << "Informe o seu genero:(M ou F) \n";
	cin >> Sexo;
	
	cout << "Informe sua Idade: \n";
	cin >> Idade;
	
	cout << "Informe seu Salario: \n";
	cin >> Salario; 
	
	 if (Sexo == "M")
    {
        cout << "Voce e um homem, e sua idade e "<< Idade << " anos\n";
    }
    else
    {
        cout <<"Voce e uma mulher e seu salario e R$ "<< Salario << "\n";
    }
    
	
	
	system ("pause");
  return 0;
}


    
    


