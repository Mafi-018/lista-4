#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int turno;
	
	do {
		cout << "Informe o dígito do turno sorteado: ";
	    cin >> turno;
	    
	    switch(turno){
	    	case 0: cout << "Saindo do programa";
	    	
	    	case 1: cout << "Manhã\n";
	    	break;
	    	case 2: cout << "Tarde\n";
	    	break;
	    	case 3: cout << "Noite\n";
	    	break;
	    	
	
	    	default: cout << "Informe um dígito válido\n"; 
	}
		
	}while(turno != 0); 
	
}
