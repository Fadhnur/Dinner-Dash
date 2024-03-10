#ifndef CUSTOMER_HPP
#define Customer_hpp

class Customer
{
private:
    int emotion;
    int emoTime;
    int people;
public:
    Customer(/* args */);
    ~Customer();

    void DecreaseEmoTime();
    
};


#endif