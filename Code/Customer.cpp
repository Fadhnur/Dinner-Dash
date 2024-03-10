#include "Customer.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

Customer::Customer(/* args */)
{
    people = rand() % 4 + 1;
}

Customer::~Customer()
{
}

void Customer::DecreaseEmoTime()
{
    
}