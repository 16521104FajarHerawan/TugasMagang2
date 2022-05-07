#ifndef __ROBOT_HPP__
#define __ROBOT_HPP__

#include "State.hpp"
#include <iostream>
using namespace std;

class Robot {
    protected:
        state status;
        string nama;
    public:
        // default constructor: atribut nama dibebaskan, status OFF
        Robot();
        
        // user defined constructor: atribut nama, status diisi sesuai dengan parameter
        Robot(string nama, state status);

        // copy constructor: copy semua atribut dari robot yang diberikan
        Robot(const Robot &robot);

        // destructor: buat destructor kosong
        ~Robot();

        // Mencetak "Robot telah dinyalakan"
        void nyala();

        // Mencetak "Robot telah dimatikan"
        void mati();

        // pure virtual method
        virtual void jalan() = 0;
};

#endif