#include <locale.h>
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, aux = -1;
	string enunciado, opc1, opc2, opc3, opc4, rcorreta;
	string prova[5][6];	
	
	do {
		cout
			<< "Menu de opções:" << endl
			<< "1. Cadastro" << endl
			<< "2. Exclusão" << endl
			<< "3. Consulta" << endl
			<< "4. Sair" << endl;
	
		cin >> opcao;
				
		switch(opcao)
		{
		case 1:
			cin.ignore();
			for(int i = 0; i <= 4; i++)
			{
				cout << "Enunciado da " << i+1 << "º questão: ";
	            getline(cin, enunciado);
	            
	            prova[i][0] = enunciado;
	
	            cout << "Primeira opção da " << i+1 << "º questão: ";
	            getline(cin, opc1);
	            
	            prova[i][1] = opc1;
	
	            cout << "Segunda opção da " << i+1 << "º questão: ";
	            getline(cin, opc2);
	            
	            prova[i][2] = opc2;
	
	            cout << "Terceira opção da " << i+1 << "º questão: ";
	            getline(cin, opc3);
	            
	            prova[i][3] = opc3;
	
	            cout << "Quarta opção da " << i+1 << "º questão: ";
	            getline(cin, opc4);
	            
	            prova[i][4] = opc4;
	
	            cout << "Resposta correta da " << i+1 << "º questão: ";
	            getline(cin, rcorreta);
	            
	            prova[i][5] = rcorreta;
			}
			cout << "Cadastrado com sucesso!\n\n";
			break;
		case 2:
			cout << "Informe o enunciado da questão que você quer excluir: ";
            cin.ignore();
            getline(cin, enunciado);
            
            for (int i = 0; i <= 4; i++)
            {
                if (prova[i][0] == enunciado)
                {
                    aux = i;
                }
            }
            
            if (aux == -1)
            {
                cout << "Questão não encontrada!\n\n";
            }
            else
            {
                for(int i = 0; i <= 5; i++)
				{
					prova[aux][i] = "";
				}
                cout << "Excluído com sucesso!\n\n";
            }
			break;
		case 3:
			cout << "Qual resposta você deseja consultar? ";
			cin.ignore();
            getline(cin, rcorreta);
            
            for (int i = 0; i <= 5; i++)
            {
                if (prova[i][5] == rcorreta)
                {
                    cout << "Enunciado da questão " << i+1 << ": " << prova[i][0] << endl;
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