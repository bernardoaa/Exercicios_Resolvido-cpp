#include <iostream>

using namespace std;

int main(){
	
//PROGRAMA QUE CALCULA UMA DETERMINADA OPERACAO ESCOLHIDA PELO USUARIO APARTIR DE UM MENU	
	float n1, n2;
	int n;
	
	cout << "\t\tPrograma que calcula uma determinada operacao escolhida apartir de um menu\n\n";

	cout << "Escolha a opcao que deseja: \n1- Somar \n2- Subtrair \n3- Multiplicar \n4- Dividir\n\n";
	cin >> n;
	
	cout << "\nDigite o primeiro valor: ";
	cin >> n1;
	cout << "Digite o segundo valor: "; 
	cin >> n2;
	
    switch(n){
    	case  1:
    		cout << "\nO Valor da Soma e: " << n1+n2;
    		break;
    	case 2:
    		cout << "\nO Valor da Subtracao e: " << n1-n2;
    		break;
    	case 3:
			cout << "\nO Valor da Multiplicacao e: " << n1*n2;
			break;
		case 4: 
			cout << "\nO Valor da Divisao e: " << n1/n2;
			break;
		default:
			cout << "\nEscolha Invalida";
	}
	
	return 0;
}
