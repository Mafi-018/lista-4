#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	cout << "Informe um n�mero inteiro: ";
	cin >> n1;
	
	if (n1<0){
		cout << "� um n�mero negativo";
	}else if (n1==0){
		cout << "� zero";
	}else if (n1>0){
		cout << "� um n�mero positivo";
	}
	
}
