#include <iostream>

int main() {
    // char는 1byte integer이다
    // ASCII code에 따라 숫자에 할당된 문자를 보여줌
    
    // 아스키 코드로 init
    char ch1(97);
    // 문자로 init
    char ch2('a');


    // 결과는 같다
    std::cout << ch1 << std::endl;
    std::cout << ch2 << std::endl;

    // 완벽하게 동일한지 확인
    if (ch1 == ch2)
        std::cout << "a = ASCII(97)" << std::endl;
    else
        std::cout << "a is not 97" << std::endl;

    // 'a'를 int로 변형할 수 있는지 실험
    int i(ch2);
    std::cout << i   << std::endl;
    std::cout << ch2 << std::endl;
    
    // i는 97로 출력되고 ch2는 여전히 'a'인 것을 확인

    return 0;
}