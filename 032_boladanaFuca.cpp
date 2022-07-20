#include <iostream>

int main() {

    char saque { };
    int forca { };
    int t { };

    std::cin >> saque >> forca;

    if ( saque == 'b'){
        t = 20;
    } else if (saque == 'c'){
        t =18;
    }

    int poder = ((forca * t) - 80) /10;

    if (poder < 150){
        std::cout << "Fraco, nem passou\n";
    } else if ((poder >= 150) && (poder < 180)){
        std::cout << "Perfeito\n";
    } else if ((poder > 180) && (poder < 210)){
        std::cout << "Satisfeito\n";
    } else if (poder > 210){
        std::cout << "Muito forte, bola fora\n";
    }


}