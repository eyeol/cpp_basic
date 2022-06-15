// rounding error 실험

#include <iostream>
#include <iomanip>

int main() {

    std::cout << std::setprecision(20);
    double x(1.0);
    std::cout << x << std::endl;
    double x1(0.1);
    std::cout << x1 << std::endl;
    double y(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 );
    std::cout << y << std::endl;

    return 0;
}