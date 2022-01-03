#include <iostream>

using namespace std;

int main(){
	
//PROGRAMA QUE ESCREVE POR EXTENSO UM NUMERO DIGITADO PELO USUARIO 	
	int n;
	
	cout << "\t\tPrograma que escreve por extenso um numero digitado pelo usuario\n\n";
	cout << "Entre com um numero(No intervalo de 1 a 10): ";
	cin >> n;
	
	if(n==1){
		cout << "UM";
	}else if(n==2){
		cout << "DOIS"; 
	}else if(n==3){
		cout << "TRES";
	}else if(n==4){
		cout << "QUATRO";
	}else if(n==5){
		cout << "CINCO";
	}else if(n==6){
		cout << "SEIS";
	}else if(n==7){
		cout << "SETE";
	}else if(n==8){
		cout << "OITO";
	}else if(n==9){
		cout << "NOVE";
	}else if(n==10){
		cout << "DEZ";
	}else if(n<1 && n>10){
		cout << "Numero Invalido";
	}else{
		cout << "Numero Invalido";
	}
	
	return 0;
}
