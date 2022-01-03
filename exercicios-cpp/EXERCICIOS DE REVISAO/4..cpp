#include <iostream>

using namespace std;

int main(){
	
//PROGRAMA QUE RETORNA O MAIOR NUMERO, APARTIR DE 3 NUMEROS DIGITADOS PELO USUARIO	
	float x, y, z;
	
	cout << "\t\tVerificacao do maior numero\n\n";
	cout << "Digite o primeiro numero: ";
	cin >> x;
	cout << "Digite o segundo numero: ";
	cin >> y;
	cout << "Digite o terceiro numero: ";
	cin >> z;
	
	if(x>y && x>z){
		cout << "\nO Maior dos tres numeros digitados e: " << x;
	}else if(y>x && y>z){
		cout << "\nO Maior dos tres numeros digitados e: " << y;
	}else if(z>x && z>y){
		cout << "\nO Maior dos tres numeros digitados e: " << z;
	}else if(z==x && x==y && y==z){
		cout << "\nTodos eles sao iguais";
	}else if(z==x && z>y){
		cout << x << " e " << z << " Sao iguais e maiores que " << y; 
	}else if(x==y && x>z){
		cout << x << " e " << y << " Sao iguais e maiores que " << z;
	}else if(z==y && z>x){
		cout << z << " e " << y << " Sao iguais e maiores que " << x;
	}else{
		cout << " ";
	}
	
	return 0;
}
