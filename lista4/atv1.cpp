#include <iostream>

int main() {
    int dia;

    std::cout << "Digite um n�mero inteiro entre 1 e 7: ";
    std::cin >> dia;

    switch (dia) {
        case 1:
            std::cout << "Domingo\n";
            break;
        case 2:
            std::cout << "Segunda-feira\n";
            break;
        case 3:
            std::cout << "Ter�a-feira\n";
            break;
        case 4:
            std::cout << "Quarta-feira\n";
            break;
        case 5:
            std::cout << "Quinta-feira\n";
            break;
        case 6:
            std::cout << "Sexta-feira\n";
            break;
        case 7:
            std::cout << "S�bado\n";
            break;
        default:
            std::cout << "N�mero inv�lido\n";
    }

    return 0;
}
