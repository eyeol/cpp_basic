// int와 double의 연산 결과를 확인하는 실험
// modular operator 사용

#include <iostream>

int main() {

    int x = 7;
    int y = 3;

    double a = 7.0;
    double b = 3.0;

    // case1) int와 int
    std::cout << "7 나누기 3: ";
    std::cout << x/y << std::endl;

    // case2) double과 int
    std::cout << "7.0 나누기 3: ";
    std::cout << a/y << std::endl;

    // case3) int와 double
    std::cout << "7 나누기 3.0: ";
    std::cout << x/b << std::endl;

    // case1) double과 double
    std::cout << "7.0 나누기 3.0: ";
    std::cout << a/b << std::endl;

    std::cout << std::endl;

    // static_cast<>를 사용한 실험
    std::cout << "static_cast<>를 사용한 형변환" << std::endl;
    std::cout <<"int/int: "<< x/y << std::endl;
    std::cout <<"double/int: "<< static_cast<double>(x)/y << std::endl;
    std::cout <<"int/double: "<< x/static_cast<double>(y) << std::endl;
    std::cout <<"double/double: "<< static_cast<double>(x)/static_cast<double>(y) << std::endl;


    std::cout << std::endl;

    // modular operator 사용
    int count = 1;
    while(count <= 100){
        // 7로 나누어떨어지면 출력
        if (count%7 == 0)
            std::cout << count << std::endl;
        
        count += 1;

    }

    return 0;
}