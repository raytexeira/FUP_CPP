#include <iostream>

int main(){
    int p {}, d1 {}, d2 {}, soma;
   // while (true){
        std::cin >> p >> d1 >> d2;
        soma = d1+d2;
        
        if((soma % 2 == 0) && p == 0){
            std::cout << "alice";
        }
        else if ((soma %2 != 0) && p==1){
            std::cout << "alice";
        }
        else std::cout << "bob";
   // }
}
