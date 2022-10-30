#include<iostream>
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int op;
	float num, num2,a;
	cout<<"Digite um numero: ";
	cin>>num;
	cout<<"Digite outro numero: ";
	cin>>num2;
	cout<<"1-Média entre os números digitados"<<endl;
	cout<<"2-Diferença do maior pelo menor"<<endl;
	cout<<"3-Produto entre os números digitados"<<endl;
	cout<<"4-Divisão do primeiro pelo segundo"<<endl;
	cout<<"Escolha uma opção: "<<endl;
	cin>>op;
	if (op==1)
	{
		a=(num+num2)/2;
		cout<<"Média: "<<a<<endl;
	}
	if (op==2)
	{
		if (num>num2)
		{
			a=num-num2;
			cout<<"Diferença: "<<a<<endl;
		}
		else
		{
			a=num2-num;
			cout<<"Diferença: "<<a<<endl;
		}
	}
	if (op==3)
	{
		a=num*num2;
		cout<<"Produto: "<<a<<endl;
	}
	if (op==4)
	{
		if (num2!=0)
		{
			a=num/num2;
			cout<<"Divisão: "<<a<<endl;
		}
		else
		{
			cout<<"Divisão inválida."<<endl;
		}
	}
	if ((op!=1)&&(op!=2)&&(op!=3)&&(op!=4))
	{
		cout<<"Opção não encontrada, fim do programa."<<endl;
	}	
	return 0;
}