#include <iostream>

using namespace std;

int main(){
	 
//PROGRAMA QUE MOSTRA A ESCOLHA DO USUARIO APARTIR DE UM MENU DADO
	int n;
	
	cout << "\t\tPrograma que mostra a escolha do usurio apartir de um menu\n\n";
	cout << "Escolha a opcao que deseja: \n1 Inclusao \n2 Exclusao \n3 Alteracao \n4 Sair\n";
	cin >> n;
	
	switch(n){
		case 1:
			cout << "Escolheste a opcao 1-Inclusao";
			break;
		case 2:
		    cout << "Escolheste a opcao 2-Exclusao";
			break;
		case 3:
			cout << "Escolheste a opcao 3-Alteracao";
			break;
		case 4:
			cout <<"Escolheste a opcao 4-Sair";
			break;
		default:
			cout << "Escolha Invalida";	
	}
	
	return 0;
}
