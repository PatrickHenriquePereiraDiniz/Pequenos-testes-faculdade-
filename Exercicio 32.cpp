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
32.	Escreva um algoritmo que leia o NOME e o SAL�RIO BRUTO de um funcion�rio. O programa dever� calcular e imprimir o sal�rio l�quido, sendo que:
	
	SAL�RIO L�QUIDO = SAL�RIO BRUTO - DESCONTO
	
	Sal�rio Bruto							Desconto
9% do sal�rio bruto                        At� R$ 800,00
10% do sal�rio bruto                       De R$ 800,01 a R$ 1500,00
11% do sal�rio bruto                       Acima de R$ 1500,00
*/


