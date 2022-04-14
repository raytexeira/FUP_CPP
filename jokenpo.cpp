#include <iostream>

int main(){

    char jog1 {}, jog2 {};

    std::cin >> jog1 >> jog2;
    
    if (jog1 == jog2) {
        std::cout << "empate\n";
    }
    else if ((jog1 == 'P') && (jog2 == 'R')) {
        std::cout << "jog1\n";
    }
    else if ((jog1 == 'R') && (jog2 == 'S')) {
        std::cout << "jog1\n";
    }
    else if ((jog1 == 'S') && (jog2 == 'P')) {
        std::cout << "jog1\n";
    }
    else std::cout << "jog2\n";
