#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int num1, num2;
	float soma, mult, div, mod, div_r, pot, sub;
	
	cout << "\t\tCalculadora\n\n";
	
	cout << "Informe o Primeiro Numero: ";
	cin >> num1;
	
	cout << "Informe o Segundo Numero: ";
	cin >> num2;
		cout<< "\n"<< num1 << " + " << num2 << " = "<< num1+num2;
		cout<< "\n"<< num1 << " - " << num2 << " = "<< num1-num2;
		cout<< "\n"<< num1 << " * " << num2 << " = "<< num1*num2;
		cout<< "\n"<< num1 << " ^ " << num2 << " = "<< pow(num1,num2);
			if (num2 !=0) {
			
				cout<< "\n"<< num1 << " / " << num2 << " = "<< num1/num2;
				cout<< "\n"<< num1 << " % " << num2 << " = "<< num1%num2;
				cout<< "\n"<< num1 << " / " << num2 << " = "<< (float)num1+num2;
				
	
}
	
	system ("Pause");
return (0);
}
