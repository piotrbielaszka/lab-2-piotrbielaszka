// #define CATCH_CONFIG_MAIN
#include "Wektor.hpp"
// #include "catch.hpp"
#include <iostream>

int main()
{
    Wektor w{2};
    w[0] = 21;
    w[1] = 37;
    w.print();

    std::cout << "\n-----\n\n";
    w.zmienDlugosc(4);
    w[2] = 69;
    w[3] = 420;
    w.print();

    std::cout << "\n-----\n\n";
    w.zmienDlugosc(3);
    w.print();

    std::cout << "\n-----\n\n";
    w.zmienDlugosc(4);
    w.print();

    w[10] = 21.37;
    w.print();
    std::cout << w.getDlugosc();
}