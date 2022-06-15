// increment&decrement operators

#include <iostream>

int main() {

    // increment operator
    int x = 5;
    // prefix : x값 변화가 먼저, 할당이 그 다음
    int y = ++x; // x = 6으로 변함
    // postfix: x값 할당이 먼저, 변화가 그 다음
    int z = x++;

    std::cout << "prefix 결과 : "  << y << std::endl;
    std::cout << "postfix 결과 : " << z << std::endl;
    std::cout << "x의 최종값 : " << x << std::endl;
    

    // decrement operator
    int a = 20;
    // prefix : a값 변화가 먼저, 할당이 그 다음
    int b = --a;
    // postfix: a값 할당이 먼저, 변화가 그 다음
    int c = a--;

    std::cout << "prefix 결과 : "  << b << std::endl;
    std::cout << "postfix 결과 : " << c << std::endl;
    std::cout << "a의 최종값 : " << a << std::endl;


    return 0;
}