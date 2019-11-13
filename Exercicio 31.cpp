#include <iostream>
using namespace std;
int main() {
	cout << "\t\tExercicio 31\n";
	string Nome;
	float horas_t, Salario_liq, Salario_bt, Salario_Hora;
	int classe_f = 0;
	
	cout << "Informe seu Nome: ";
	cin >> Nome;
	
	cout <<"Informe o numero de horas trabalhadas: ";
	cin >> horas_t;
	
	cout <<"Informe sua classe funcional: \n1-Operador.\n2-Tecnico\n";
	cin >> classe_f;
	
	if(classe_f == 1)
	{
		Salario_Hora = 5;
	}
	else 
	{
		Salario_Hora = 9;
	}
	
	
	Salario_bt = horas_t * Salario_Hora;
	Salario_liq = Salario_bt - (Salario_bt *0.11);
	
	
	cout << "Seu saldo liquido e: R$ " << Salario_liq <<" \n" ;
	
	
	
	system ("pause");
return 0;
}



