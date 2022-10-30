#include <locale.h>
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, meses;
	double salario;
	
	do {
		cout
			<< "Menu de opções:" << endl
			<< "1. Novo salário" << endl
			<< "2. Férias" << endl
			<< "3. Décimo terceiro" << endl
			<< "4. Sair" << endl;
	
		cin >> opcao;
				
		switch(opcao)
		{
		case 1:
			cout << "Informe seu salário: ";
			
			cin >> salario;
			
			if (salario <= 0) {
				cout << "Salário inválido. Operação cancelada!\n\n";
			}else if (salario < 1100) {
				salario = salario + salario * 15 / 100;	
				cout << "Seu novo salário é: " << salario << " reais\n\n";
			} else if (salario >= 1100 && salario < 2750) {
				salario = salario + salario * 10 / 100;
				cout << "Seu novo salário é: " << salario << " reais\n\n";
			} else if (salario >= 2750) {
				salario = salario + salario * 5 / 100;
				cout << "Seu novo salário é: " << salario << " reais\n\n";
			}	
			break;
		case 2:
			cout << "Informe seu salário: ";
			
			cin >> salario;
			
			if (salario <= 0) {
				cout << "Salário inválido. Operação cancelada!\n\n";
			} else {
				salario = salario + salario / 3;
				cout << "O valor de suas férias é: " << salario << " reais\n\n";
			}
			break;
		case 3:
			cout << "Informe seu salário: ";
			
			cin >> salario;
			
			if (salario <= 0) {
				cout << "Salário inválido. Operação cancelada!\n\n";
			}else {
				cout << "Informe o número de meses de trabalho na empresa (no máximo 12): ";
			
				cin >> meses;
			
				if (meses <= 0 || meses > 12) {
					cout << "Número de meses inválido. Operação cancelada!\n\n";
				}else {
				salario = salario * meses / 12;
					cout << "O valor de seu décimo terceiro é: " << salario << " reais\n\n";
				}
			}	
			break;
		case 4:
			cout << "Encerrando o programa!\n\n";
			break;
		default:
			cout << "Opção inválida!\n\n";
			break;
		}
	} while (opcao != 4);
		
}