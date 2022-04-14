#include <iostream>

    int main()
    {
        double  nota1 {0};
        double  nota2 {0};
        double  nota3 {0};
        double  nota4 {0};
        double  nota5 {0};

            std::cin >> nota1 >> nota2 >> nota3 >> nota4 >> nota5;
        double media = (nota1 + nota2 + nota3 + nota4 + nota5) /5;
            std::cout << "A media eh\n" << media;

            if(media >= 7)
            {
                std::cout << "\n aprovado\n"; 
            }
            else
            
             if(media <=6 && media>=4)
            {
                std::cout << "\n af\n";
            }
            
            else
                std::cout << "\n reprovado\n";

    return 0;
    }
