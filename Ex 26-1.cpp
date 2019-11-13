#include <iostream>;
#include <math.h>;
using namespace std;
int main () {
    cout << "\t\t\tCalculadora\n\n\n";
    string text;
    int op, sair, num1, num2;
    float soma, div_real, mult, div, mod, pot, sub; 
    op = 0 , sair = 0;
    
    cout << "Insira o primeiro numero: ";
    cin >> num1;    
    
    cout << "Insira o segundo numero: ";
    cin >> num2; 
    
    
    text = "\nPor favor informe a opcao desejada:\n";
   
    text += "1 - Soma.\n";
    text += "2 - Subtracao.\n";
    text += "3 - Multiplicacao.\n";
        if (num2!=0){
	    text += "4 - Div.\n";
	    text += "5 - Mod.\n";
	    text += "6 - Divisao Real.\n";
	}
	text += "7 - Potencia.\n";
	text += "8 - Sair.\n";
    
    
    cout << text;
    //cout << "\nPor favor informe a opcao desejada:\n1 - Soma.\n2 - Subtracao.\n3 - Multiplicacao.\n4 - Div.\n5 - Mod.\n6 - Divisao Real.\n7 - Potencia.\n8 - Sair. \n";
	

while (sair != 1) {

cout << "--->";
cin >> op;
     //Condição para Sair do While
	switch (op) {
		case 8:
			sair = 1;
			break;
		
	     //Soma
		case 1:
			soma = num1 + num2;
			cout << soma;
			cout << "\n\nDigite uma nova opcao: ";
			break;
			
		 // Subtracao
		case 2:
			sub = num1 - num2;
			cout << sub;
			cout << "\n\nDigite uma nova opcao: ";
			break;
			
        // Multiplicacao
		case 3:
			mult = num1 * num2;
			cout << mult;
			cout << "\n\nDigite uma nova opcao: ";
			break;
		// Div
		case 4:
			if (num2==0) {
				cout << "\n\nNao ha resultado para divisao por 0,\nDigite uma nova opcao: ";
				break;
			}
			div = num1 / num2;
			cout << div;
			cout << "\n\nDigite uma nova opcao: ";
			break;
		 // Mod
		case 5:
			if (num2==0) {
				cout << "\n\nNao ha resultado para divisao por 0,\nDigite uma nova opcao: ";
				break;
			}
			mod = num1 % num2;
			cout << mod;
			cout << "\n\nDigite uma nova opcao: ";
			break;
        // Divisao Real
		case 6:
			if (num2==0) {
				cout << "\n\nNao ha resultado para divisao por 0,\nDigite uma nova opcao: ";
				break;
			}
			div_real = float (num1 / num2);
			cout << div_real;
			cout << "\n\nDigite uma nova opcao: ";
			break; 
        // Potencia
		case 7:
			pot = pow(num1,num2);
			cout << pot;
			cout << "\n\nDigite uma nova opcao: ";
			break;
	
	}
			
}

    
    
    
    cout << "\n\nFim do Programa\n\n";
    system ("pause");
    
    
    
    return(0);
}
