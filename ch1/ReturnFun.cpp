// 값을 반환하는 함수

#include <iostream>

int GetInput() {
    std::cout << "Enter a number: ";
    int a;
    std::cin >> a;
    return a;
}

int main() {
    int x = GetInput();
    int y = GetInput();

    std::cout << x << " + " << y << " = " << x+y << std::endl;

    return 0;
}