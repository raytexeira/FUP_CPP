#include <iostream>

int main(){
    int p {}, d1 {}, d2 {}, soma;
    int result {};
    std::cin >> p >> d1 >> d2;
    soma = d1+d2;
    
    if((soma % 2 == 0) && p == 0){
        std::cout "Alice";
    }
    else if ((soma %2 != 0) && p==1){
        std::cout << "bob";
    }
}