#include <iostream>
using namespace std;
int main() {
	cout << "\t\t\tBem Vindo ao CITYBANK - Banco da Cidade \n";
	
	//Variaveis
	string  cliente;
	float Sld_Atual, Ret_1, Ret_2, Dep, Sld_final, Ret_total;
	int op, op2, sair, sair2;
	Ret_1 = 0, Ret_2 = 0, op = 0, op2 = 0, Dep = 0, sair = 0; sair2 = 0;
	
			//Identificação Inicial.	
	cout<< "OLA! GENITLEZA DIGITE SEU NOME \n-->";
	cin>>cliente;

	cout<< "\nComo vai "<< cliente << " , SUA CONTA FOI IDENTIFICADA";
	cout<< "\nC/C 12548-99\n\n";
	
	cout << "Insira seu Saldo Atual R$ ";
	cin >> Sld_Atual;
	
	// Menu de Opções 1
	cout << "\nPor favor informe a opcao desejada:\n1 - Primeira Retirada .\n2 - Segunda Retirada .\n3 - Deposito.\n4 - Extrato(Menu) \n";
	
		//Primeiro menu de Opções
while (sair != 1) {
	
	cout << "--->";
	cin >> op;
         //Condição para Sair do While
		switch (op) {
			case 4:
				sair = 1;
				break;
			
		  //Valor de retirada 1
			case 1:
				cout << "Digite o valor a ser retirado R$: ";
				cin >> Ret_1;
				cout << "\n\nDigite uma nova opcao: ";
				break;
				
			 // Valor de retirada 2
			case 2:
				cout << "Digite o valor a ser retirado R$: ";
				cin >> Ret_2;
				cout << "\n\nDigite uma nova opcao: ";
				break;
				
			// Valor Depositado
			case 3:
				cout << "Digite o valor a ser Depositado R$: ";
				cin >> Dep;
				cout << "\n\nDigite uma nova opcao: ";
				break;
		
		}
				
	}

// Calculos das retiradas
Ret_total =  Ret_1 + Ret_2;

// Calculos Total
Sld_final = Sld_Atual - Ret_total + Dep;
	//Menu De opções 2
	cout << "\nPor favor informe a opcao desejada:\n1 - Saldo Total .\n2 - Saldo Retirado 2.\n3 - Saldo Depositado.\n4 - Fechar \n";
		
	//Segundo Menu de Opções
while (sair2 != 1 ) {
	cout << "--->";
	
	cin >> op2;
     // Inicio dos Casos.
		switch (op2) {
			case 4:
				sair2 = 1;
				break;
		 // Saldo Total apos as operações.
			case 1:
				cout << "Saldo Total R$: ";
				cout << Sld_final ;
				cout << "\n\nDigite uma nova opcao: ";
				break;
				
			// Saldo dos valores Retirados.
			case 2:
				cout << "Saldo das Retiradas R$: ";
				cout << Ret_total;
				cout << "\n\nDigite uma nova opcao: ";
				break;
				
			// Saldo depositado.
			case 3:
				cout << "Valor Depositado R$: ";
				cout << Dep;
				cout << "\n\nDigite uma nova opcao: ";
				break;	
	
		}
			
	}

    // Fim do programa.
	cout << "Obrigado " << cliente  <<" e tenha um bom dia! \n";
	system ("Pause");
return (0);
}



