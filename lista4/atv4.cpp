#include <iostream>

int main() {
    int mes;

    std::cout << "Digite um número inteiro entre 1 e 12: ";
    std::cin >> mes;

    switch (mes) {
        case 1:
            std::cout << "Janeiro\n";
            break;
        case 2:
            std::cout << "Fevereiro\n";
            break;
        case 3:
            std::cout << "Março\n";
            break;
        case 4:
            std::cout << "Abril\n";
            break;
        case 5:
            std::cout << "Maio\n";
            break;
        case 6:
            std::cout << "Junho\n";
            break;
        case 7:
            std::cout << "Julho\n";
            break;
        case 8:
            std::cout << "Agosto\n";
            break;
        case 9:
            std::cout << "Setembro\n";
            break;
        case 10:
            std::cout << "Outubro\n";
            break;
        case 11:
            std::cout << "Novembro\n";
            break;
        case 12:
            std::cout << "Dezembro\n";
            break;
        default:
            std::cout << "Inválido\n";
    }

    return 0;
}
