#include <iostream>

#include <math.h>

using namespace std; 

int main(){
	
	float x1, x2, i, fat = 1 cont; 
	int n;
	
	inicio:
	system("cls");	
	cout << "\nDigite Numeros valido\n";	
	cout << "\nDigite o primeiro valor: ";
	cin >> x1;
	cout << "\nDigite o segundo valor: ";
	cin >> x2;
	
	if(x1<0 || x2<0){
		cout << "Numeros Invalidos";
		goto inicio;
	}else{
		cout << "\n";
	}
	cout << "Escolha: \n1 Para Subtrair o fatorial do primeiro pelo segundo ao quadrado\n";
	cout << "2 Para Calcular a soma do cubo do primeiro com a metade do segundo\n";
	cout << "3 Para Calcular a soma da raiz quadrada dos numeros digitados\n";
	cout << "4 Para soma da divisao do primeiro pelo segundo com o segundo\n";
	cin >> n;
	
	cont
	
	switch(n){
		case 1:
			for(fat=1; fat<x1; x1=x1-1){
				fat=fat*x1;
			}
			cout << "\n" << fat-pow(x2,2);
		    break;
		case 2:
		    cout << "\n" << pow(x1,3)+x2/2;
			break;
		case 3:
			cout << "\n" << sqrt(x1)+sqrt(x2);
			break;
		case 4:
			cout << "\n" << (x1/x2)+x2;
			break;
		default:
			cout << "Escolha Invalida";  
	}
	
	return 0;
}
