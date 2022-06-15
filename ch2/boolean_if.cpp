// 불린과 조건문

#include <iostream>

int main() {

    std::cout << true  << std::endl;
    std::cout << false << std::endl;
    std::cout << 1 << std::endl;
    std::cout << 0 << std::endl;

    // boolalpha 실험
    std::cout << std::boolalpha;
    std::cout << true  << std::endl;
    std::cout << false << std::endl;
    std::cout << 1 << std::endl;
    std::cout << 0 << std::endl;

    if (0)
        std::cout << "The First is True"   << std::endl;
    else
        std::cout << "The First is False"  << std::endl;

    if (true)
        std::cout << "The Second is True"  << std::endl;
    else
        std::cout << "The Second is False" << std::endl;

    return 0;
}