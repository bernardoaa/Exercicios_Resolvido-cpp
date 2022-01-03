#include <iostream>
#include <math.h>
using namespace std;

int main(){  
	
//VERIFICACAO DE CONDICOES DE UMA EQUACAO QUADRATICA 	
	float a, b, c;
	
	cout << "\t\tEquacao Quadratica\n\n";
    cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b; 
	cout << "Digite o valor de c: ";
	cin >> c;
	
	cout << "O valor de delta e: " << ((b*b)-(4*a*c)) <<"\n";
	
	if(((b*b)-(4*a*c))>0){
		cout << "\nTem raizes reais e diferentes";
	}else if(((b*b)-(4*a*c))==0){
		cout << "\nTem raizes reais e iguais";
	}else{
		cout << "\nNao tem solucao em IR";
	}

	cout << "\nO valor de x1 e: " << ((-b+sqrt(((b*b)-(4*a*c))))/(2*a)) << "\n";
	cout << "O valor de x2 e: " << ((-b-sqrt(((b*b)-(4*a*c))))/(2*a));
	
	return 0;
}
