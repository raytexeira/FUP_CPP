#include <iostream>
#include <iomanip>
#include <stdio.h>

int main(){

    int numero1 { };
    int numero2 { };

    std::cin >> numero1 >> numero2;
    std::cout << std::fixed;
    auto s2 = std::setprecision(2);
    float divquebrada= (double) numero1 / numero2;

    std::cout << (numero1 / numero2) << "\n" << (numero1 % numero2) << "\n" << s2 << divquebrada;
}