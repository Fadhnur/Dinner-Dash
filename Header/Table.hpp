#ifndef TABLE_HPP
#define Table_hpp

#include "CustomerQueue.hpp"
#include "Customer.hpp"
#include <map>

class Table
{
private:
    int noMeja;
    int jumlahKursi;
    int status;
    map<int, Customer> kursi;
    
public:
    Table(/* args */);
    ~Table();

    void cekMeja();
    void addCustomer();
};


#endif