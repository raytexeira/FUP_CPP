#include <iostream>

int main (){

    while (true){ 
    
        int jog1 {}, jog2 {}, jog3 {};

        std::cin >> jog1 >> jog2 >> jog3;

        if ((jog1 == jog2) && (jog2 == jog3)) {
            std::cout << "empate\n";
        }
        else if ((jog1 == jog2) && (jog2 != jog3)) {
            std::cout << "jog3\n";
        }
        else if ((jog1 == jog3) && (jog3 != jog2)) {
            std::cout << "jog2\n";
        }
        else std::cout << "jog1\n";

    }
}