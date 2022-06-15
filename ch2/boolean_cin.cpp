// boolean 입력 실험

#include <iostream>

int main() {
    // bool init
    bool b;
    std::cout << "boolean 입력: ";
    std::cin >> b;

    std::cout << std::boolalpha;
    std::cout << "입력 값: " << b << std::endl;

    // 0 이외에는 모두 true 반환, 0일 때만 false 반환하는 것을 확인

    return 0;
}