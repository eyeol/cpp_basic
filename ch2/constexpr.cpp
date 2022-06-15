// constexpr와 symbolic 상수 사용 예시

#include <iostream>

// 매크로를 이용한 symbolic 상수 선언 (not recommended)
#define MAX 50

int main() {
    // runtime 상수 vs compile time 상수
    // runtime에 값을 할당받으면 runtime 상수
    // compile time에 값을 할당받으면 compile time 상수
    // constexpr을 사용하면 compile time에만 할당이 가능하다
    
    // g++ -std=c++17로 컴파일해야 에러가 뜨지 않는다
    constexpr int sum = 4 + 5;
    constexpr double gravity(9.8);

    // const 또는 constexpr를 사용한 symbolic 상수 선언 (recommended)
    constexpr int min(3);

    // cin으로 입력받는 경우 runtime 상수이기 때문에 constexpr로 선언할 수 없음
    std::cout << "숫자를 입력하시오: ";
    int age;
    std::cin >> age;

    const int number = age;

    std::cout << sum << std::endl;
    std::cout << gravity << std::endl;

    // symbolic 상수 출력
    std::cout << MAX << std::endl;
    std::cout << min << std::endl;



    return 0;
}