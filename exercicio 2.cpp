#include<iostream>
#include<locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL,"portuguese");
	float alt, peso;
	for (int i=1; i<=5; i++)
	{
		cout<<"Digite sua altura: "<<endl;
		cin>>alt;
		cout<<"Digite seu peso: "<<endl;
		cin>>peso;
		if (peso<60)
		{
		  if (alt<1.20)
		  {
		  	cout<<"Sua classificação: A"<<endl;
		  }	
		  if ((1.20<=alt)&&(alt<1.70))
		  {
		  	cout<<"Sua classificação: B"<<endl;
		  }
		  if (1.70<=alt)
		  {
		  	cout<<"Sua classificação: C"<<endl;
		  }
		}
		if ((60<=peso)&&(peso<90))
		{
		  if (alt<1.20)
		  {
		  	cout<<"Sua classificação: D"<<endl;
		  }	
		  if ((1.20<=alt)&&(alt<1.70))
		  {
		  	cout<<"Sua classificação: E"<<endl;
		  }
		  if (1.70<=alt)
		  {
		  	cout<<"Sua classificação: F"<<endl;
		  }			
		}
		if (90<=peso)
		{
		  if (alt<1.20)
		  {
		  	cout<<"Sua classificação: G"<<endl;
		  }	
		  if ((1.20<=alt)&&(alt<1.70))
		  {
		  	cout<<"Sua classificação: H"<<endl;
		  }
		  if (1.70<=alt)
		  {
		  	cout<<"Sua classificação: I"<<endl;
		  }			
		}
	}
	return 0;
}