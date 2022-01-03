#include <iostream>

using namespace std;

int main(){ 
	
//PROGRAMA QUE VERIFICA A FAIXA ETARIA APARTIR DE UM NUMERO INTRODUZIDO PELO USUARIO	
	int b;
	cout << "\t\tVerificacao de faixa etaria\n\n";
	cout << "Escolha a faixa etaria que deseja: \n1 Para Crianca \n2 para Jovem \n3 Para Adulto \n4 Para Velho\n";
	cin >> b;
	
	switch(b){
		case 1:
			cout << "CRIANCA\n";
			cout << "Varia de 0 aos 17 Anos de Idade";
			break;
		case 2:
		    cout << "JOVEM\n";
		    cout << "Varia de 18 aos 29 Anos de Idade";
			break;
		case 3:
		    cout << "ADULTO\n";
		    cout << "Varia de 30 aos 49 Anos de Idade";
			break;
		case 4:
		    cout << "VELHO\n";
		    cout << "De 40 Anos de Idade para frente";
			break;
		default:
		    cout << "ESCOLHA INVALIDA";				
	}
	return 0;
}
