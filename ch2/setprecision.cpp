#include <iostream>
#include <iomanip>

int main() {
    float number1;
    double number2;
    long double number3;

    std::cout << "float의 크기: " << sizeof(number1) << "bytes" << std::endl;
    std::cout << "double의 크기: " << sizeof(number2) << "bytes" << std::endl;
    std::cout << "long double의 크기: " << sizeof(number3) << "bytes" << std::endl;

    std::cout << std::setprecision(10);
    // float은 어디까지 표현되는지
    number1 = 9.87654321f;
    std::cout << number1 << std::endl;
    number1 = number1 * 100;
    std::cout << number1 << std::endl;
    number1 = number1 * 100;
    std::cout << number1 << std::endl;
    number1 = number1 * 100;
    std::cout << number1 << std::endl;
    number1 = number1 / 100000000000000;
    std::cout << number1 << std::endl;

    // std::cout은 정밀도 지정이 가능
    std::cout << std::setprecision(40);
    number2 = 2.222222222222222222222222;
    number3 = 5.555555555555555555555555;

    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;

    // 정밀도 이상의 수를 요구하면 random한 숫자가 나오는거 같다

    return 0;
}