// bitwise operators : 변수 내 bit를 조작
// 특정 상황 말고는 잘 쓰이지 않는다

#include <iostream>
int main() {
    
    int x = 32;
    // 이진수가 왼쪽으로 한칸식 움직이면 일반적으로 2배가 될 것(손실되는 경우를 제외하고)
    int y = x << 1;
    int z = x << 2;
    
    // 오른쪽으로 한칸식 움직이면 절반이 됨
    int p = x >> 1;
    int q = x >> 2;

    std::cout << y << std::endl;
    std::cout << z << std::endl;

    std::cout << p << std::endl;
    std::cout << q << std::endl;
    


    return 0;
}