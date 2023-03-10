#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	cout << "Informe um número inteiro: ";
	cin >> n1;
	
	if (n1<0){
		cout << "É um número negativo";
	}else if (n1==0){
		cout << "É zero";
	}else if (n1>0){
		cout << "É um número positivo";
	}
	
}
