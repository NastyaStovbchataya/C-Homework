#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback, price16;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >> hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout << name << '\n';

    std::cout << std::setfill('.') << std::setw(17) << std::left << "Price:";
    std::cout << std::setfill('0') << std::setw(8) << std::right << std::uppercase << std::hex << price << "\n";
    std::cout << "Has cash-back:";
    std::cout << std::setfill('.') << std::setw(11) << std::boolalpha << hasCashback << "\n";
    std::cout << "Max temperature:";
    std::cout << std::setfill('.') << std::setw(9) << std::dec << std::showpos << temperature;

    return 0;
}