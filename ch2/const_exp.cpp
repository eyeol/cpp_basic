// const 사용 예시
#include <iostream>


// 매개변수를 const로 작성하면 함수 안에서 X의 값을 변경할 수 없게 된다
// 즉, 매개변수 값의 변화를 막기 위해 설정하는 것
int ParaConst(const int X){
    
    return X*X;
}

int main() {
    // 변경 가능한 int 변수 x
    int x(4);
    std::cout << x << std::endl;

    x = 5;
    std::cout << x << std::endl;

    const int y(7);
    std::cout << y << std::endl;

    // const는 literal이 아니라 변수 값으로도 init이 가능
    const int z(x);
    std::cout << z << std::endl;

    std::cout << ParaConst(x) << std::endl;

    return 0;
}