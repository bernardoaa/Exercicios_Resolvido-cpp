#include <iostream>

using namespace std;

int main(){
	
//PROGRAMA QUE MOSTRA O SESULTADO DA +,*,/,-	
	float n1, n2;
	int n;
	
	cout << "\t\tPROGRAMA QUE MOSTRA O SESULTADO DA +,*,/,-\n\n";
	cout << "Digite o primeiro valor: ";
	cin >> n1;
	cout << "Digite o segundo valor: ";
	cin >> n2;
	cout << "Escolha a operacao que deseja efectuar: \n1 para Soma \n2 Para Diferenca \n3 Para Producto \n4 Para Razao\n";
	cin >> n;
	
	switch(n){
		case 1:
			cout << "O Valor da Soma e: " << n1+n2;
			break;
		case 2: 
		 	cout << "O Valor da Diferenca e: " << n1-n2;
		 	break;
		case 3:
			cout << "O Valor do Producto e: " << n1*n2;
			break;
		case 4:
			cout << "O Valor da Razao e: " << n1/n2;
			break;
		default:
			cout << "ESCOLHA INVALIDA";
	}
	
	return 0;
}
