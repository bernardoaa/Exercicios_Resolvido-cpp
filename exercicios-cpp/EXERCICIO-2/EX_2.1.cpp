#include <iostream>

using namespace std;

int main(){
	
//CALCULO DA MEDIA DE FREQUENCIA COM BASE EM 2 TESTES E 1 TRABALHO	
	float t1, t2, trabalho;
	string nome;
	
	cout << "\t\tCalculo da media de frequencia\n\n";
	cout << "Digite o nome do estudante: ";
	cin >> nome;
	cout << "Digite o valor do primeiro teste: ";
	cin >> t1;
	cout << "Digite o valor do segundo teste: ";
	cin >> t2;
	cout << "Digite o valor do trabalho: ";
	cin >> trabalho; 
	
	cout << "\nO Nome do estudante e: " << nome;
	cout << "\nO valor do primeiro teste e: " << t1;
	cout << "\nO valor do segundo teste e: " << t2;
	cout << "\nO valor do trabalho e: " << trabalho;
	cout << "\nO valor da media de frequencia e: " << (t1*0.35)+(t2*0.35)+(trabalho*0.3);
	
	if(((t1*0.35)+(t2*0.35)+(trabalho*0.3))>=14 && ((t1*0.35)+(t2*0.35)+(trabalho*0.3))<=20 ){
		cout << "\nDispensado";
	}else if(((t1*0.35)+(t2*0.35)+(trabalho*0.3))>=10 && ((t1*0.35)+(t2*0.35)+(trabalho*0.3))<14){
		cout << "\nAdmitido";
	}else if(((t1*0.35)+(t2*0.35)+(trabalho*0.3))<10 && ((t1*0.35)+(t2*0.35)+(trabalho*0.3))>=0){
		cout << "\nEscluido";
	}else{
		cout << "\nNota Invalida";
	}
	
	
	return 0;
}
