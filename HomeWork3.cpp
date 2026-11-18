#include <iostream>
#include <string>

int main() 
{
    std::string gender, zodiac;
    int age;

    std::cout << "Enter your gender (male/female): ";
    std::cin >> gender;

    std::cout << "Enter your zodiac sign (for example: Pisces, Taurus): ";
    std::cin >> zodiac;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (gender == "male") {
        bool isWater = (zodiac == "pisces" || zodiac == "cancer" || zodiac == "scorpio");
        if (isWater && age < 40) {
            std::cout << "\nYour prediction:\n";
            std::cout << "Today is a very productive day. You can achieve what previously seemed almost impossible.\n";
        }
    }

    if (gender == "female") {
        bool isEarth = (zodiac == "taurus" || zodiac == "virgo" || zodiac == "capricorn");
        if (isEarth && age >= 15 && age <= 30) {
            std::cout << "\nYour prediction:\n";
            std::cout << "Tonight is a good time to hang out with friends, host small gatherings, and throw impromptu parties.\n";
            std::cout << "It will be not only fun but also interesting: there will be something to engage everyone.\n";
        }
    }

    std::cout << "\nYour prediction:\n";
    std::cout << "The horoscope for you is being developed. Please come back a little later. ;)\n";

    return 0;
}