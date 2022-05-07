#include <iostream>
#include "Boneka.hpp"
using namespace std;

//default constructor
Boneka::Boneka(){
    nama = "Default";
}

//user define constructor
Boneka::Boneka(string nama){
    this-> nama = nama;
}
//copy constructor
Boneka::Boneka(const Boneka &Boneka){
    this->nama = Boneka.nama;
}

//get method
string Boneka::getNama(){
    return this->nama;
}

//destructor
Boneka::~Boneka(){

}