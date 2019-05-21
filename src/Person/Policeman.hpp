/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_POLICEMAN_HPP
#define SPECIAL_SUCCOTASH_POLICEMAN_HPP

#include <list>
#include "Person.hpp"

class Policeman : public Person{
public:
    Policeman(string name) : Person(name){}

    bool canDrive(){
        return true;
    }

    bool validation(list<Person*> *others){
        return true;
    }

};

#endif //SPECIAL_SUCCOTASH_POLICEMAN_HPP
