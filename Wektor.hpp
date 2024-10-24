#include <iostream>

class Wektor
{
private:
    unsigned int dlugosc;
    unsigned int pojemnosc;
    double*      wektor;

public:
    Wektor(const unsigned int n)
    {
        wektor    = new double[n];
        dlugosc   = n;
        pojemnosc = n;
        for (int i = 0; i < n; i++) {
            *(wektor + i) = 0;
        }
    }
    ~Wektor() { delete[] wektor; }

    unsigned int getDlugosc() { return dlugosc; }
    unsigned int getPojemnosc() { return pojemnosc; }

    void   set(const unsigned int n, double wartosc) { *(wektor + n) = wartosc; }
    double get(const unsigned int n) { return *(wektor + n); }

    double& operator[](const unsigned int n)
    {
        if (n >= dlugosc) {
            zmienDlugosc(n + 1);
        }
        return wektor[n];
    }

    void print()
    {
        for (int i = 0; i < dlugosc; i++) {
            std::cout << *(wektor + i) << "\n";
        }
    }

    void zmienDlugosc(const unsigned int n)
    {
        if (n <= pojemnosc && n <= dlugosc) {
            dlugosc = n;
        }
        else if (n <= pojemnosc && n > dlugosc) {
            for (int i = dlugosc; i < n; i++) {
                *(wektor + i) = 0;
            }
            dlugosc = n;
        }
        else if (n > pojemnosc) {
            double* nowy_wektor = new double[n];
            for (int i = 0; i < dlugosc; i++) {
                *(nowy_wektor + i) = *(wektor + i);
            }
            for (int i = dlugosc; i < n; i++) {
                *(nowy_wektor + i) = 0;
            }
            dlugosc   = n;
            pojemnosc = n;
            delete[] wektor;
            wektor = nowy_wektor;
        }
    }
};
