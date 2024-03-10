#include "CustomerQueue.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

CustomerQueue::CustomerQueue(/* args */)
{
}

CustomerQueue::~CustomerQueue()
{
}

void CustomerQueue::EnqueueCustomer()
{
    if(customer.size() < 6){    //mengecek antrian sudah penuh atau tidak
        customer.push(cus);     //memasukkan customer ke dalam antrian
    } else {
        cout << "Antrian sudah penuh" << endl;
    }
}

void CustomerQueue::DequeueCustomer()
{
    if(!customer.empty()){      //mengecek antrian kosong atau tidak
        if(!table.empty()){         //mengecek meja kosong atau tidak
            customer.pop();         //menghapus customer pertama dari antrian
            table.addCustomer(cus);    //menambahkan customer ke meja
        }
    } else {
        cout << "Antrian kosong" << endl;
    }
}

