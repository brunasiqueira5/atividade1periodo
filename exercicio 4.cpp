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
	cout<<"1-M�dia entre os n�meros digitados"<<endl;
	cout<<"2-Diferen�a do maior pelo menor"<<endl;
	cout<<"3-Produto entre os n�meros digitados"<<endl;
	cout<<"4-Divis�o do primeiro pelo segundo"<<endl;
	cout<<"Escolha uma op��o: "<<endl;
	cin>>op;
	if (op==1)
	{
		a=(num+num2)/2;
		cout<<"M�dia: "<<a<<endl;
	}
	if (op==2)
	{
		if (num>num2)
		{
			a=num-num2;
			cout<<"Diferen�a: "<<a<<endl;
		}
		else
		{
			a=num2-num;
			cout<<"Diferen�a: "<<a<<endl;
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
			cout<<"Divis�o: "<<a<<endl;
		}
		else
		{
			cout<<"Divis�o inv�lida."<<endl;
		}
	}
	if ((op!=1)&&(op!=2)&&(op!=3)&&(op!=4))
	{
		cout<<"Op��o n�o encontrada, fim do programa."<<endl;
	}	
	return 0;
}