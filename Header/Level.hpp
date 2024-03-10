#ifndef LEVEL_HPP
#define Level_hpp

#include "Goal.hpp"
#include "Money.hpp"
#include "Kitchen.hpp"
#include "Table.hpp"
#include "Trashbin.hpp"
#include "Dish.hpp"
#include "CustomerQueue.hpp"

class Level
{
private:
    Goal goal;
    Table table;
    Kitchen kitchen;
    Trashbin trashbin;
    CustomerQueue customQueue;
    Money money;
    Dish dish;

public:
    Level(/* args */);
    ~Level();

    void startGame();
    void endGame();
    void setTable();
};


#endif