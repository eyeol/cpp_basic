// 10진수, 8진수, 16진수, 2진수 literal 사용
// 각각 어떻게 assign하는지 확인

#include <iostream>

int main() {
    int deci(12);
    int octa(012);

    std::cout << "10진수 12는 10진수로 " << deci << std::endl;
    std::cout << "8진수 12는 10진수로 "  << octa << std::endl;

    int hexa(0x18);
    int bina(0b101011);

    std:: cout << "16진수 18은 10진수로 " << hexa << std::endl;
    std:: cout << "2진수 101011은 10진수로 " << bina << std::endl;

    return 0;
}