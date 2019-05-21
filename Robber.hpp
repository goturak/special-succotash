//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_ROBBER_HPP
#define SPECIAL_SUCCOTASH_ROBBER_HPP


#include "Person.hpp"

class Robber : public Person{
public:
    Robber(string name) : Person(name){}

    bool canDrive(){
        return false;
    }

};


#endif //SPECIAL_SUCCOTASH_ROBBER_HPP
