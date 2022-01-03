#include <iostream>

using namespace std;

int main(){
	
//PROGRAMA QUE MOSTRA TABUADA DE MULTIPLICACAO APARTIR DE UM NUMERO INTRODUZIDO PELO USUARIO	
	float n, i=2;
	
	cout << "\t\tTabuada de Multiplicacao\n\n";
	cout << "Digite um numero: ";
	cin >> n;
	
	while(i<13){
		cout << n << "x" << i << "=" << n*i << "\n";
		i++;
	}
	return 0;
}
