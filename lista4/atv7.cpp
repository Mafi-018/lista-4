#include <iostream>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char c;

    std::cout << "Digite um caractere: ";
    std::cin >> c;

    if (c >= 'a' && c <= 'z') {
        std::cout << "O caractere digitado é uma letra minúscula.\n";
    } else if (c >= 'A' && c <= 'Z') {
        std::cout << "O caractere digitado é uma letra maiúscula.\n";
    } else if (c >= '0' && c <= '9') {
        std::cout << "O caractere digitado é um número.\n";
    } else {
        std::cout << "O caractere digitado não é uma letra nem um número.\n";
    }

    return 0;
}
