#include <iostream>
#include "RobotKRSRI.hpp"
using namespace std;

//default constructor
RobotKRSRI::RobotKRSRI(){
    nama="Default";
    status=OFF;
    jumlah_kaki=8;
}

//user defined constructor
RobotKRSRI::RobotKRSRI(string nama, state status, int jumlah_kaki){
    this->nama=nama;
    this->status=status;
    this->jumlah_kaki=jumlah_kaki;
}

//copy constructor
RobotKRSRI::RobotKRSRI(const RobotKRSRI &robot){
    this->nama=robot.nama;
    this->status=robot.status;
    this->jumlah_kaki=robot.jumlah_kaki;
}

//destructor
RobotKRSRI::~RobotKRSRI(){
    boneka->~Boneka();
}

//method padamkanApi()
void RobotKRSRI::padamkanApi(){
    cout<<"Api telah dipadamkan"<<endl;
}

//method ambilBoneka()
void RobotKRSRI::ambilBoneka(){
    if (this->status == ON){
        cout<<"Boneka telah diambil"<<endl;
    }
    else{
        cout<< "Robot belum dinyalakan"<<endl;
    }
}

//method jalan()
void RobotKRSRI::jalan(){
    if (this->status==ON){
        cout<<"Robot sedang berjalan."<<endl;
    }
    else{
        cout<<"Robot belum dinyalakan"<<endl;
    }
}

//method ambilBoneka()
void RobotKRSRI::ambilBoneka(Boneka* boneka){
    if (this->status == ON){
        cout<<"Boneka dengan nama "<<boneka->getNama()<<" telah diambil"<<endl;
    }
    else{
            cout<< "Robot belum dinyalakan"<<endl;
    }    
}


