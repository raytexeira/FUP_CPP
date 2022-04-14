#include <iostream>

int main(){
    int numero;
    std::cin >> numero;

    if (numero >= 1) {
        std::cout << "positivo";
    }
    else if (numero < 0){
        std::cout << "negativo";
    }
    else if (numero == 0){
        std::cout << "nulo";
    }
}