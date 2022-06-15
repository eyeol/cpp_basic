// 헤더 파일 사용 예시

#include <iostream>
#include "FantasticFour.h"


int main() {

    int a = 4;
    int b = 2;

    int p = add(a,b);
    int q = min(a,b);

    int r = mul(a,b);
    int s = nan(a,b);

    std::cout << "더한 결과: " << p << std::endl;
    std::cout << "뺀 결과: " << q << std::endl;
    std::cout << "곱한 결과: " << r << std::endl;
    std::cout << "나눈 결과: " << s << std::endl;

    return 0;
}
