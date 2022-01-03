#include <iostream>

#define pi 3,14

using namespace std;

int main(){
	
//CALCULO DA AREA DE UM CIRCULO	
	float raio, Area;
	Area=pi*raio*raio;
	
	cout << "\t\tCalculo da area de um circulo\n\n";
	cout << "Digite o valor do raio: ";
	cin >> raio;
	
	cout << "O valor da area e: " << Area;
	
	return 0;
}
