#include <iostream>

int main() {
    int dia;

    std::cout << "Digite um número inteiro entre 1 e 7: ";
    std::cin >> dia;

    switch (dia) {
        case 1:
            std::cout << "Domingo\n";
            break;
        case 2:
            std::cout << "Segunda-feira\n";
            break;
        case 3:
            std::cout << "Terça-feira\n";
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
            std::cout << "Sábado\n";
            break;
        default:
            std::cout << "Número inválido\n";
    }

    return 0;
}
