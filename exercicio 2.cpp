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
		  	cout<<"Sua classifica��o: A"<<endl;
		  }	
		  if ((1.20<=alt)&&(alt<1.70))
		  {
		  	cout<<"Sua classifica��o: B"<<endl;
		  }
		  if (1.70<=alt)
		  {
		  	cout<<"Sua classifica��o: C"<<endl;
		  }
		}
		if ((60<=peso)&&(peso<90))
		{
		  if (alt<1.20)
		  {
		  	cout<<"Sua classifica��o: D"<<endl;
		  }	
		  if ((1.20<=alt)&&(alt<1.70))
		  {
		  	cout<<"Sua classifica��o: E"<<endl;
		  }
		  if (1.70<=alt)
		  {
		  	cout<<"Sua classifica��o: F"<<endl;
		  }			
		}
		if (90<=peso)
		{
		  if (alt<1.20)
		  {
		  	cout<<"Sua classifica��o: G"<<endl;
		  }	
		  if ((1.20<=alt)&&(alt<1.70))
		  {
		  	cout<<"Sua classifica��o: H"<<endl;
		  }
		  if (1.70<=alt)
		  {
		  	cout<<"Sua classifica��o: I"<<endl;
		  }			
		}
	}
	return 0;
}