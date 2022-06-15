// bitflag 사용 실습

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

    unsigned char myflags = 0;

    std::cout << std::bitset<8>(myflags) << std::endl;

    myflags |= option4;
    // myflags = (myflags|option4) 라고 쓸 수도 있다
    myflags |= option6;

    // 4번, 6번 bit를 켠 상태
    std::cout << std::bitset<8>(myflags) << std::endl;

    // 6번 비트를 꺼보자
    myflags = (myflags & ~option6);

    // 4번 bit만 켠 상태
    std::cout << std::bitset<8>(myflags) << std::endl;

    // 여러 개의 비트를 동시에 켜보자
    myflags |= (option1 | option7);

    // 1번, 4번, 7번 bit를 켠 상태
    std::cout << std::bitset<8>(myflags) << std::endl;

    // 여러 개의 비트를 동시에 꺼보자
    myflags &= ~(option4 | option7);

    // 1번 bit만 켠 상태
    std::cout << std::bitset<8>(myflags) << std::endl;


    // 특정 bit가 켜진 상태인지 확인
    if (myflags & option1)
        std::cout << "1번 bit on" << std::endl;
    
    if (!(myflags & option4))
        std::cout << "4번 bit off" << std::endl;

    return 0;
}