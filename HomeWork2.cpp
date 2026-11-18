#include <iostream>

int main() 
{
    int a, b, c;

    std::cout << "Enter the first number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> b;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> c;

    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    int mid = a + b + c - max - min;

    std::cout << max << " " << mid << " " << min << "\n";

    return 0;
}