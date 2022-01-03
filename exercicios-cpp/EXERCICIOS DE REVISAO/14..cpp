#include <iostream>

#include <math.h>

using namespace std;

int main(){
	
//PROGRAMA QUE IMPRIME OS TERMOS DE UM PG	
	int n;
	
	cout << "\n\t\tTermos de uma PG!\n";
	cout << "\nDigite a ordem do termo: ";
	cin >> n;
	
	cout << "O termo de ordem que introduziste e: " << (pow(2,n))*2;
	
	return 0;
}
