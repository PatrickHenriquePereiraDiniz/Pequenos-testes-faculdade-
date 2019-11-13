#include <iostream>
using namespace std;
int main() {
	cout << "\t\tExercicio 33\n";
	string Nome, Cat, Cls_s;
	int idade;
	float renda_f;
	
	cout << "Informe seu nome: ";
	cin >> Nome;
	
	cout << "Informe sua idade: ";
	cin >> idade;
	
	cout << "Informe sua renda familiar: ";
	cin >> renda_f;
	
   //IF para definir a Categoria
 	if(idade <= 15) 
	{
 		Cat = "Infantil";
 	}
 		else 
 		{
 			if (idade > 16 && idade < 18)
			 {
 				Cat = "Juvenil" ;
			 }
			 	else 
				 {
			 		Cat = "Adulto";
				 }
			 
		}

 	//IF para definir Classe Social 
	if(renda_f<=1000.00)
	{
		Cls_s = "MEDIA BAIXA";
	}
		else 
		{
			if (renda_f > 1000.01 && renda_f < 3500 )
			{
				Cls_s = "MEDIA";
			}
				else
				{
					Cls_s = "MEDIA ALTA";
				}
		}


	cout<<"O atleta "<<Nome<<" esta na Categoria "<<Cat<<", na classe social "<<Cls_s<<" .\n";



	system ("pause");
return 0;
}








/*
33. Escreva um algoritmo que leia o nome, a idade e a renda familiar de um esportista do Clube Horse. Imprimir a categoria do esportista, com base na seguinte tabela: 
 
Idade                     Categoria 
Até 15 anos             Infantil
De 16 a 18 anos           Juvenil 
Acima de 18 anos         Adulto 


Imprimir também a classe social do esportista, com base na tabela abaixo: 
 
Renda Familiar                     Classe Social 
Até R$ 1.000,00                 Média baixa
De R$ 1.000,01 a R$ 3.500,00     Média
Acima de R$ 3.500,00            Média alta
*/
