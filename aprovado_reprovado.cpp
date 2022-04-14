#include <iostream>

int main(){
    float nota1, nota2, media;

    std::cin >> nota1 >> nota2;
    media= (nota1+nota2) /2;

    if (media >= 7){
        std::cout << "Aprovado";
    }
    else if (media < 7 && media >=4){
        std::cout << "Recuperacao";
    }
    else if (media < 4){
        std::cout << "Reprovado";
    }
}