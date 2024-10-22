// #define CATCH_CONFIG_MAIN
#include "Wektor.hpp"
// #include "catch.hpp"
#include <iostream>

int main()
{
    Wektor w{2};
    w.set(0, 21);
    w.set(1, 37);
    w.print();
    
    std::cout << "\n-----\n\n";
    w.zmienDlugosc(4);
    w.set(2, 69);
    w.set(3, 420);
    w.print();

    std::cout << "\n-----\n\n";
    w.zmienDlugosc(3);
    w.print();

    std::cout << "\n-----\n\n";
    w.zmienDlugosc(4);
    w.print();
}