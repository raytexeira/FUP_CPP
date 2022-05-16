#include <iostream>
#include <iomanip>
int main (){
    int hora { };
    int minuto { };
    int dia { };
    int mes { };
    int ano { };

    std::cin >> hora >> minuto >> dia >> mes >> ano;
    
    std::cout << std::fixed;
    auto sw = std::setw(2);
    std::cout << std::setfill('0');
    
    std::cout << sw << hora << ":" << sw << minuto << " " 
              << sw << dia << "/" << sw << mes << "/" 
              << std::setw(2) << std::fixed << ano %100;
}
