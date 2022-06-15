// conditional operator ?: => 조건문처럼 작동한다

#include <iostream>

int main() {
    
    int x;
    int y;
    
    std::cout << "x값 : ";
    std::cin >> x;
    std::cout << "y값 : ";
    std::cin >> y;

    std::cout << "더 큰 값: ";
    std::cout << ((x>y) ? x : y) << std::endl;


    return 0;
}