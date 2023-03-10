#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	cout << "Informe o número para a tabuada";
	cin >> numero;
	
	for (int x = 0; x <= 10; x++){
		cout << numero << " X " << x << " = " << numero * x << endl;
	}
	
}
