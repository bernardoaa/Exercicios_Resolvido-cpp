#include <iostream>

using namespace std;

int main(){
	
//PROGRAMA QUE RECEBE O NUMERO E A IDADE DE UMA SERIE DE PESSOAS E IMPRIME A IDADE DA PESSOA MENOR	
	int numero, idade;
	
	
	cout << "\t\tPrograma que recebe o numero e a idade de diversas pessoas e imprime a idade da pessoa menor";

    inicio:

	cout << "\nDigite a idade da pessoa: ";
	cin >> idade;
	cout << "Digite o numero da pessoa: ";
	cin >> numero;
	
	if(numero!=0){
		goto inicio;
	}
	
	
	return 0;
}
