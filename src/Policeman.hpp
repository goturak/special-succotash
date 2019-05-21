//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_POLICEMAN_HPP
#define SPECIAL_SUCCOTASH_POLICEMAN_HPP

#include "Person.hpp"

class Policeman : public Person{
public:
    Policeman(string name) : Person(name){}

    bool canDrive(){
        return true;
    }
};

#endif //SPECIAL_SUCCOTASH_POLICEMAN_HPP
