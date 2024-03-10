#ifndef CUSTOMERQUEUE_HPP
#define CustomerQueue_hpp

#include "Customer.hpp"
#include "Table.hpp"

#include <queue>

class CustomerQueue
{
private:
    int numCostumers;
    queue<Customer> customer;
    bool isEmpty;
    Customer cus;       
    Table table;

public:
    CustomerQueue(/* args */);
    ~CustomerQueue();

    void EnqueueCustomer();
    void DequeueCustomer();
    
    
};

#endif