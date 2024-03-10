#include "Table.hpp"
#include <iostream>
#include <stdlib.h> //rand()
#include <ctime>    //time()


using namespace std;

Table::Table(/* args */)
{
    jumlahKursi = rand() % 6 + 1;   //generate 1-6 kursi pada satu meja
}

Table::~Table()
{
}

void Table::cekMeja(){
    
}

void Table::addCustomer(Customer& customer){
    if(kursi.size() <= jumlahKursi){        //memeriksa apakah ada kursi yang kosong
        int noKursi = kursi.size() + 1;     //nomor kursi dimulai dari 1
        kursi[noKursi] = customer;          //menambah pelanggan ke kursi dengan nomor kursi yang tersedia
    } else {
        cout << "Meja penuh" << endl;
    }
}