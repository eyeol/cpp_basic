// 값을 반환하지 않는 함수

#include <iostream>

void DoPrint() {
    std::cout << "It is DoPrint" << std::endl;
}

int main() {

    std::cout << "main start" << std::endl;
    DoPrint();
    std::cout << "main end" << std::endl;

    return 0;

}