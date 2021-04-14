#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, char** argv) {
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float delta;
    
	cout<<"-------------MINHA PRIMEIRA CALCULADORA DE BHASKARA-------------"<<endl;
		
	cout<< "Digite o Valor de A:"<<endl;
	cin>> a;
	cout<< "Digite o Valor de B :"<<endl;
	cin>> b;
	cout<< "Digite o valor de C"<<endl;
	cin>> c;
	
	delta=(b*b)-4*a*c;
	cout<<"Seu Delta e "<<delta;
	x1= ((-1*b)+sqrt(delta))/(2*a); 
	x2= ( (-1*b)-sqrt(delta))/(2*a);
	

	
	if(delta < 0) { 
     cout << "\nDelta com valor negativo.\n Impossivel raiz valor de numero negativo" <<endl;
    } else {
     cout<<"\n O Valor do seu X1 e:"<<x1 <<endl;
     cout<<" O Valor do seu X2 e:"<<x2 <<endl;
    }
	
	system ("pause");
	
	return 0;
}
