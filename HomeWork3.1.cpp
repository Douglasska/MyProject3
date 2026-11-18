#include <iostream>

int main() {
    bool A;
    bool B;

    for (int variable1 = 1; variable1 >= 0; --variable1) 
    {
        for (int variable2 = 1; variable2 >= 0; --variable2)
        {
            A = (variable1 == 1);
            B = (variable2 == 1);

            bool result = A || B;

            std::cout << std::boolalpha;
            std::cout << A << " " << B << " " << result << "\n";
        }
    }
    std::cout << "\n";

    for (int variable1 = 1; variable1 >= 0; --variable1) 
    {
        for (int variable2 = 1; variable2 >= 0; --variable2) 
        {
            A = (variable1 == 1);
            B = (variable2 == 1);

            bool result = A && B;

            std::cout << std::boolalpha;
            std::cout << A << " " << B << " " << result << "\n";
        }
    }

    return 0;
}