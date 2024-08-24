#include "../header/Fixed.hpp"

void subject(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "[a = " << a << " and b = " << b << "]" << std::endl;
    std::cout << "[subject]" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << "--------------------" << std::endl;
}

void comparison(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "[a = " << a << " and b = " << b << "]" << std::endl;
    std::cout << "[comparison operators]" << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "--------------------" << std::endl;
}

void arithmetic(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "[a = " << a << " and b = " << b << "]" << std::endl;
    std::cout << "[arithmetic operators]" << std::endl;
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "a - b: " << (a - b) << std::endl;
    std::cout << "a * b: " << (a * b) << std::endl;
    std::cout << "a / b: " << (a / b) << std::endl;
    std::cout << "--------------------" << std::endl;
}

void incrementDecrement(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "[a = " << a << " and b = " << b << "]" << std::endl;
    std::cout << "[increment and decrement operators]" << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "a--: " << a-- << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "[a = " << a << " and b = " << b << "]" << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "--a: " << --a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "--------------------" << std::endl;
}

void minMax(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "[a = " << a << " and b = " << b << "]" << std::endl;
    std::cout << "[min and max functions]" << std::endl;
    std::cout << "max: " << Fixed::max(a, b) << std::endl;
    std::cout << "min: " << Fixed::min(a, b) << std::endl;
    std::cout << "--------------------" << std::endl;
}

int main(void)
{
    subject();
    comparison();
    arithmetic();
    incrementDecrement();
    minMax();

    return 0;
}
