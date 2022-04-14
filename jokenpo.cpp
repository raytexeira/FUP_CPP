#include <iostream>

int main(){

    char jog1 {}, jog2 {};
while(true){   
        std::cin >> jog1 >> jog2;

        if ((jog1 == jog2)) {
            std::cout << "empate";
        }
        else if ((jog1 == 'p') && (jog2 == 'r')) {
            std::cout << "jog1 win";
        }
        else if ((jog1 == 'r') && (jog2 == 's')) {
            std::cout << "jog1 win";
        }
        else if ((jog1 == 's') && (jog2 == 'p')) {
            std::cout << "jog1 win";
        }
        else std::cout << "jog2 winn";
    }
}