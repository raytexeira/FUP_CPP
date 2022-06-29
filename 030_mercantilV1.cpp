#include <iostream>
#include <math.h>

int main(){
    int valor { };
    int chute1 { };
    int chute2 { };

    std::cin >> valor >> chute1 >> chute2;


    int pontosde1 = abs(valor - chute1);
    int pontosde2 = abs(valor - chute2);

    if(pontosde1 == pontosde2){
        std::cout << "empate" << "\n";     
    } else if((pontosde1 == valor) || ((pontosde1  % valor) < (pontosde2 % valor))) {
        std::cout << "primeiro" << "\n";
    } else if((pontosde2 == valor) || ((pontosde2  % valor) < (pontosde1 % valor))) {
        std::cout << "segundo" << "\n";
    }

}