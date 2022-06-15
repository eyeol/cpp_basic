// bitset을 활용한 실습
// bitMask 사용

#include <iostream>
#include <bitset>

int main() {

    const unsigned char option0 = 1 << 0; // bit 0
    const unsigned char option1 = 1 << 1; // bit 1
    const unsigned char option2 = 1 << 2; // bit 2
    const unsigned char option3 = 1 << 3; // bit 3
    const unsigned char option4 = 1 << 4; // bit 4
    const unsigned char option5 = 1 << 5; // bit 5
    const unsigned char option6 = 1 << 6; // bit 6
    const unsigned char option7 = 1 << 7; // bit 7

    // 8bits를 가진 변수 선언, 아무런 값을 할당하지 않으면 00000000으로 초기화됨
    std::bitset<8> bits;

    // 값을 할당하면서 초기화해보자, 10001001
    std::bitset<8> new_bits(option0 | option3 | option7);

    std::cout << new_bits << std::endl;

    // 16진수로 값을 할당해보자, 00010001
    std::bitset<8> neo_bits(0x11);

    std::cout << neo_bits << std::endl;

    // new_bits의 bit 조작하기
    new_bits.set(1);
    new_bits.set(2);
    std::cout << new_bits << std::endl;

    new_bits.flip(6);
    new_bits.reset(0);

    std::cout << new_bits << std::endl;

    // new_bits의 bit 확인하기
    std::cout << "new_bits의 0번 bit는 " << new_bits.test(0) << std::endl;
    std::cout << "new_bits의 1번 bit는 " << new_bits.test(1) << std::endl;
    std::cout << "new_bits의 2번 bit는 " << new_bits.test(2) << std::endl;
    std::cout << "new_bits의 3번 bit는 " << new_bits.test(3) << std::endl;
    std::cout << "new_bits의 4번 bit는 " << new_bits.test(4) << std::endl;
    std::cout << "new_bits의 5번 bit는 " << new_bits.test(5) << std::endl;
    std::cout << "new_bits의 6번 bit는 " << new_bits.test(6) << std::endl;
    std::cout << "new_bits의 7번 bit는 " << new_bits.test(7) << std::endl;


    // BitMask

    // 0000 0000 0000 1111
    const unsigned int lowMask = 0xF;

    // 가장 아래 4bit를 빼고 전부 0으로 만들기
    // 한번의 연산으로 여러 bits를 수정할 수 있다
    new_bits &= lowMask;
    std::cout << new_bits << std::endl;




    return 0;
}