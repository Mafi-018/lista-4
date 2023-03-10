#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int semana;
	
	do {
		cout << "Informe o dígito da semana: ";
	    cin >> semana;
	    
	    switch(semana){
	    	case 0: cout << "Saindo do programa";
	    	break;
	    	case 1: cout << "É final de semana\n";
	    	break;
	    	case 2: cout << "É um dia útil\n";
	    	break;
	    	case 3: cout << "É um dia útil\n";
	    	break;
	    	case 4: cout << "É um dia útil\n";
	    	break;
	    	case 5: cout << "É um dia útil\n";
	    	break;
	    	case 6: cout << "É um dia útil\n";
	    	break;
	    	case 7: cout << "É final de semana\n";
	    	break;
	    
	    	default: cout << "Informe um dia da semana válido\n"; 
	}
		
	}while(semana != 0); 
	
}
