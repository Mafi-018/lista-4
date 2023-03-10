#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nota;
	
	do {
		cout << "Informe o dígito da nota: ";
	    cin >> nota;
	    
	    switch(nota){
	    	case 0: cout << "Saindo do programa";
	    	break;
	    	case 1: cout << "Sua nota foi A\n";
	    	break;
	    	case 2: cout << "Sua nota foi B\n";
	    	break;
	    	case 3: cout << "Sua nota foi C\n";
	    	break;
	    	case 4: cout << "Sua nota foi D\n";
	    	break;
	    	case 5: cout << "Sua nota foi F";
	    	break;
	    
	    
	    	default: cout << "Informe um dígito válido: 1,2,3,4 e 5\n"; 
	    }
		
	}while(nota != 0); 
	
}
