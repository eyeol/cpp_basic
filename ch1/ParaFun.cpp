// 매개변수를 사용하는 함수

#include <iostream>

void PrintValue(int x) {
    std::cout << "It is " << x << std::endl;
}

int add(int a, int b) {
    return a + b;
}

int GetInput() {
    std::cout << "Enter a number: ";
    int a;
    std::cin >> a;
    return a;
}


int main() {
    int x = GetInput();
    int y = GetInput();

    int z = add(x,y);

    PrintValue(z);
}