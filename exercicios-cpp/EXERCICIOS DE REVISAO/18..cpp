#include <iostream>

using namespace std;

int main(){
	
	float k, n;
	
	cout << "Digite o valor de k: ";
	cin >> k;
	cout << "Digite o valor de n: ";
	cin >> n;
	
	for(int i=1; i<=k; k++){
		cout << k << "\n";
		
		if(k>n){
			break;
		}
	}
	
	return 0;
}
