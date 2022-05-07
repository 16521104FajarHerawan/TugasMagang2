#ifndef __BONEKA_HPP__
#define __BONEKA_HPP__

// DIBUAT HANYA JIKA MENGERJAKAN BONUS
#include <iostream>
#include "State.hpp"
using namespace std;

class Boneka {
    // access modifier:
    private:
        string nama;
    public:
    // access modifier:
        // default constructor
        Boneka();

        // user defined constructor: atribut nama diisi sesuai dengan parameter
        Boneka(string nama);

        // copy constructor: copy semua atribut dari boneka yang diberikan
        Boneka(const Boneka &boneka);

        // destructor
        ~Boneka();

        // mengembalikan nama boneka
        string getNama();
};

#endif