// static_cast<type>을 이용한 형변환으로 ASCII code 확인하기

#include <iostream>

int main() {

    std::cout << "문자 입력: ";
    char ch1;
    std::cin >> ch1;

    std::cout << ch1 << "의 ASCII code는 " << static_cast<int>(ch1) << "입니다" << std::endl;

    return 0;
}