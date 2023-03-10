#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float temperaturaC, temperaturaF, temperaturaK, temperatura;
	
	cout << "Informe a temperatura em Celsius: ";
	cin >> temperaturaC;
	
	cout << "Qual escala termométrica você quer?\n";
	cout << "1- para Fahrenheit\n";
	cout << "2- para Kelvin\n";
	cin >> temperatura;
	
	if (temperatura==1){
		temperaturaF = ((temperaturaC * 9.0 / 5.0) + 32.0);
		cout << temperaturaF;
	}else if (temperatura==2){
		temperaturaK = (temperaturaC + 273);
		cout << temperaturaK;
	}

}
