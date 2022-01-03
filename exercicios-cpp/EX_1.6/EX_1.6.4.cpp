#include <iostream>

using namespace std;

int main(){
	
//CALCULO DA AREA DO TRAPEZIO	
	float B, b, altura, Area;
	Area=((B+b)*altura)/2;
	
	cout << "\t\tCalculo da area do trapezio\n\n";
    cout << "Digite o valor da base maior: ";
	cin >> B;
	cout << "Digite o valor da base menor: ";
	cin >> b;
	cout << "Digite o valor da altura: ";
	cin >> altura;
	
	cout << "O Valor da area e: " << Area;	
	
	return 0;
}
