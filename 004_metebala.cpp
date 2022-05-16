#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    float x_de_a { };
    float y_de_a { };
    float x_de_b { };
    float y_de_b { };
    float dist { };

    std::cin >> x_de_a >> y_de_a >> x_de_b >> y_de_b;
    float x_ba = (x_de_b - x_de_a);
    float y_ba = (y_de_b - y_de_a);

    float distancia = sqrt(pow( (double) x_ba,2) + pow(y_ba, 2));

    std::cout << std::fixed << std::setprecision(2) << distancia;
}