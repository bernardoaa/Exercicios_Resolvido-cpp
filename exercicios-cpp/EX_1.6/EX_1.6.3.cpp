#include <iostream>

using namespace std;

int main(){
	
//CALCULO DA AREA DO TRIANGULO	
	float base, altura, Area;
	Area=(base*altura)/2;
	
	cout << "\t\tCalculo da area do triangulo\n\n";
	cout << "Digite o valor da base: ";
	cin >> base;
	cout << "Digite o valor da altura: ";
	cin >> altura;
	
	cout << "O valor da area e: " << Area;
	
	return 0;
}
