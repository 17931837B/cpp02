#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);

    Point p1(5, 5); // 内側
    Point p2(0, 0); // 頂点
    Point p3(10,0); // 頂点
    Point p4(1,1); // 内側
    Point p5(5,0); // 辺上
    Point p6(15, 15); // 外側

    std::cout << "p1 inside: " << bsp(a, b, c, p1) << std::endl; // 1 (true)
    std::cout << "p2 inside: " << bsp(a, b, c, p2) << std::endl; // 0 (false)
    std::cout << "p3 inside: " << bsp(a, b, c, p3) << std::endl; // 0 (false)
    std::cout << "p4 inside: " << bsp(a, b, c, p4) << std::endl; // 1 (true)
    std::cout << "p5 inside: " << bsp(a, b, c, p5) << std::endl; // 0 (false)
    std::cout << "p6 inside: " << bsp(a, b, c, p6) << std::endl; // 0 (false)

    return 0;
}