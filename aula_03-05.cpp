#include <iostream>
#include <cstdlib> //srand rand
#include <ctime> //time

//min, max[

int random(int min, int max){

    int qtd =max - min;
    return rand() % qtd +min;
}
int main(){
    srand(time(0));

    int escolhido = random(1, 100);
    int menor = 0;
    int maior = 100;
    
    std::cout << "Escolha um numero entre [" << menor << ", " << maior << "]";
    
    while(true) {

        int num{ };
        
        std::cin >> num;

        if(num > escolhido){
            std::cout << "ainda nao, tente um menor\n";
        }
        if(num < escolhido){
            std::cout << "ainda nao, tente um maior\n";
        }
        if (num == escolhido) {
            std::cout << "acertou\n";
        break;
        }
    
    }
    
}