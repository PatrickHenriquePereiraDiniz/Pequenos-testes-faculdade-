#include <iostream>
using namespace std;
int main() {
	cout << "\t\tExercicio 32\n";
	string Nome;
	float Slr_bt, Slr_liq, Desc;
	
	cout << "Informe seu nome: ";
	cin >> Nome;
	
	cout << "Informe seu salario bruto R$: ";
	cin >> Slr_bt;
	
	if (Slr_bt<=800)
	{
		Desc = Slr_bt *0.09;
	}
		else	
		{
			if (Slr_bt > 800.01 && Slr_bt < 1500) 
			{
				Desc = Slr_bt *0.10;
			}
			else 
			{
				Desc = Slr_bt *0.11;
			}
		}
			
	Slr_liq = Slr_bt - Desc;
	cout <<"Seu salario liquido e: " << Slr_liq<< "\n";
	
	
	
	
	
	
	
	system ("pause");
return 0;
}

/*
32.	Escreva um algoritmo que leia o NOME e o SALÁRIO BRUTO de um funcionário. O programa deverá calcular e imprimir o salário líquido, sendo que:
	
	SALÁRIO LÍQUIDO = SALÁRIO BRUTO - DESCONTO
	
	Salário Bruto							Desconto
9% do salário bruto                        Até R$ 800,00
10% do salário bruto                       De R$ 800,01 a R$ 1500,00
11% do salário bruto                       Acima de R$ 1500,00
*/


