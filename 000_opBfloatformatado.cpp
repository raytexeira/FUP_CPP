#include <iostream>
#include <iomanip>
int main(){

    int num1 { };
    int num2 { };

    std::cin >> num1 >> num2;
    std::cout << std::fixed;


    std::cout << (num1 + num2) << "\n" << (num1 - num2) << "\n" << (num1 * num2) 
              <<"\n" << std::setprecision(2) <<((double) num1 / num2) << "\n" << (num1 % num2) << "\n";
}