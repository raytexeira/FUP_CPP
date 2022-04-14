#include <iostream>

int main(){
 int p, r;

 std::cin >> p >> r;
 if (p == 0){
     std::cout << "C";
 }   
 else if(p == 1 && r==0){
     std::cout << "B";
 }
 else if(p==1 && r==1){
     std::cout << "A";
 }
}