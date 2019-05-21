//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_BOAT_HPP
#define SPECIAL_SUCCOTASH_BOAT_HPP


#include "Container.hpp"
#include "Bank.hpp"

class Boat : public Container{
private:
    Bank* left;
    Bank* right;
    Bank* currentBank;
public:
    Boat(Bank* l, Bank* r) : Container(), left(l), right(r), currentBank(l){ }

    bool hasDriver();

    bool isLeft();

    bool move();

    Bank* getCurrentBank();

    bool embark(Person *p);

    bool debark(Person *p);

};


#endif //SPECIAL_SUCCOTASH_BOAT_HPP
