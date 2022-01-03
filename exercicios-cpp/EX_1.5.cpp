#include <iostream>

using namespace std;

int main(){

//CALCULO DA FUNCAO f(x,y)=2x+3y COM x e y DADOS 	
	float x, y, f;
	f=(2*x)+(3*y);
	
	cout << "\t\tCalculo da funcao f(x,y)=2x+3y com x e y dados\n\n";
	cout << "Digite o valor de x: ";
	cin >> x;
	cout << "Digite o valor de y: ";
	cin >> y;
	
	cout << "f(x,y) = " << f;
	return 0;
}
