// 자료형 크기 확인

#include <iostream>

int main() {
    bool YrN(true);
    char name('e');
    float time(1.1);
    int age(29);

    std::cout << sizeof(YrN) << "bytes" << std::endl;
    std::cout << sizeof(name) << "bytes" << std::endl;
    std::cout << sizeof(time) << "bytes" << std::endl;
    std::cout << sizeof(age) << "bytes" << std::endl;

    return 0;

}