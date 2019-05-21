/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_ROBBER_HPP
#define SPECIAL_SUCCOTASH_ROBBER_HPP


#include <list>
#include "Policeman.hpp"
#include "FamilyMember.hpp"
#include <iostream>

class Robber : public Person{
public:
    Robber(string name) : Person(name){}

    bool canDrive(){
        return false;
    }

    bool validation(list<Person*> *others);

};


#endif //SPECIAL_SUCCOTASH_ROBBER_HPP
