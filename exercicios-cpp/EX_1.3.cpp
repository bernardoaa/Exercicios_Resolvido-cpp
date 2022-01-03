#include <iostream>

using namespace std;

int main(){
	
//CALCULO DA MEDIA DE 4 NUMEROS DADOS	
	int n1, n2, n3, n4, media;
	
	
	cout << "\t\tCalculo da media de 4 numeros dados\n\n";
	cout << "Digite quatro numeros:\n";
	cin >> n1 >> n2 >> n3 >> n4;
	
	media=(n1+n2+n3+n4)/4;
	
	cout << "A media dos numeros digitados e:" << media;
	
	
	return 0;
}
