#include <iostream>

int main() {
    int idade {};

    std::cin >> idade;

    if (idade < 12) {
        std::cout << "criança \n";
    }
    else if (idade < 18) {
        std::cout << "adolescente \n";
    }
    else if (idade < 65) {
        std::cout << "adulto \n";
    }
    else if (idade <= 150) {
        std::cout << "idoso \n";
    }
    else
        std::cout << "defunto";
}

// IF ELSE ternario - std::cout << (condição )? (se verdade) : se falso);