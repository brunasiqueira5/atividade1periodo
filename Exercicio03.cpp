#include <locale.h>
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, meses;
	double salario;
	
	do {
		cout
			<< "Menu de op��es:" << endl
			<< "1. Novo sal�rio" << endl
			<< "2. F�rias" << endl
			<< "3. D�cimo terceiro" << endl
			<< "4. Sair" << endl;
	
		cin >> opcao;
				
		switch(opcao)
		{
		case 1:
			cout << "Informe seu sal�rio: ";
			
			cin >> salario;
			
			if (salario <= 0) {
				cout << "Sal�rio inv�lido. Opera��o cancelada!\n\n";
			}else if (salario < 1100) {
				salario = salario + salario * 15 / 100;	
				cout << "Seu novo sal�rio �: " << salario << " reais\n\n";
			} else if (salario >= 1100 && salario < 2750) {
				salario = salario + salario * 10 / 100;
				cout << "Seu novo sal�rio �: " << salario << " reais\n\n";
			} else if (salario >= 2750) {
				salario = salario + salario * 5 / 100;
				cout << "Seu novo sal�rio �: " << salario << " reais\n\n";
			}	
			break;
		case 2:
			cout << "Informe seu sal�rio: ";
			
			cin >> salario;
			
			if (salario <= 0) {
				cout << "Sal�rio inv�lido. Opera��o cancelada!\n\n";
			} else {
				salario = salario + salario / 3;
				cout << "O valor de suas f�rias �: " << salario << " reais\n\n";
			}
			break;
		case 3:
			cout << "Informe seu sal�rio: ";
			
			cin >> salario;
			
			if (salario <= 0) {
				cout << "Sal�rio inv�lido. Opera��o cancelada!\n\n";
			}else {
				cout << "Informe o n�mero de meses de trabalho na empresa (no m�ximo 12): ";
			
				cin >> meses;
			
				if (meses <= 0 || meses > 12) {
					cout << "N�mero de meses inv�lido. Opera��o cancelada!\n\n";
				}else {
				salario = salario * meses / 12;
					cout << "O valor de seu d�cimo terceiro �: " << salario << " reais\n\n";
				}
			}	
			break;
		case 4:
			cout << "Encerrando o programa!\n\n";
			break;
		default:
			cout << "Op��o inv�lida!\n\n";
			break;
		}
	} while (opcao != 4);
		
}