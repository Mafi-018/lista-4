#include <iostream>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char c;

    std::cout << "Digite um caractere: ";
    std::cin >> c;

    if (c >= 'a' && c <= 'z') {
        std::cout << "O caractere digitado � uma letra min�scula.\n";
    } else if (c >= 'A' && c <= 'Z') {
        std::cout << "O caractere digitado � uma letra mai�scula.\n";
    } else if (c >= '0' && c <= '9') {
        std::cout << "O caractere digitado � um n�mero.\n";
    } else {
        std::cout << "O caractere digitado n�o � uma letra nem um n�mero.\n";
    }

    return 0;
}
