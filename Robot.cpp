#include "Robot.hpp"
#include <iostream>
using namespace std;

//Default Constructor
Robot::Robot(){
    status = OFF;
    nama = "Default";
}

//User Define Constructor
Robot::Robot(string nama, state status){
    this->status = status;
    this->nama = nama;
}

// copy constructor
Robot::Robot(const Robot &robot){
    this->status = robot.status;
    this->nama = robot.nama;
}

// Destructor
Robot::~Robot(){
}

//method nyala , mengeluarkan tulisan "Robot telah dinyalakan"
void Robot::nyala(){
    cout<<"Robot telah dinyalakan"<<endl;
    this->status = ON;
}

//method mati , mengeluarkan tulisan "Robot telah dimatikan"
void Robot::mati(){
    cout<<"Robot telah dimatikan"<<endl;
    this->status =OFF;
}

