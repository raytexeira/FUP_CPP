#include <iostream>
#include <iomanip>

int main(){

    float salario;
    
    std::cin >> salario;
    std::cout << std::fixed;

    if (salario <= 1000.00) {
        float novosalario = salario + (salario * 20 / 100);
        std::cout << std::setprecision(2) << novosalario << "\n";
    }
    else if ( salario <= 1500.00) {
        float novosalario = salario + (salario * 15 / 100);
        std::cout << std::setprecision(2) << novosalario << "\n";
    }
    else if ( salario <= 2000.00) {
        float novosalario = salario + (salario * 10 / 100);
        std::cout << std::setprecision(2) << novosalario << "\n";
    }
    else if ( salario > 2000.00) {
        float novosalario = salario + (salario * 5 / 100);
        std::cout << std::setprecision(2) << novosalario << "\n";
    }
    
}