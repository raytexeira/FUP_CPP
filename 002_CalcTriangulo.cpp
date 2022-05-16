#include <iostream>
#include <cmath>
#include <iomanip>
int main (){
    float lado_a { };
    float lado_b { };
    float lado_c { };

    std::cin >> lado_a >> lado_b >> lado_c;
    float perimetro= (lado_a + lado_b + lado_c) / 2;

    float area = sqrt(perimetro * (perimetro -  lado_a) * (perimetro - lado_b) * (perimetro - lado_c));

    std::cout << std::fixed << std::setprecision(2) << area << "\n";
}