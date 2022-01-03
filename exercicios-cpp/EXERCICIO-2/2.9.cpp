#include <iostream>

using namespace std;

int main(){
	
//PROGRAMA QUE IMPRIME 10 NUMEROS SUBSEQUENTES DE UM NUMERO INTRODUZIDO PELO USUARIO 	
	int n;
	n=0;
	
	cout << "\t\tPrograma que imprime 10 numeros subsequentes do numero que o usuario vai digitar\n\n";
	cout << "Digite um numero: ";
	cin >> n;
	
	while(n>=0 || n<0){
		cout << n << "\n";
		n++;
		if(n==n+10){
			break;
		}
	}
	
	return 0;
}
