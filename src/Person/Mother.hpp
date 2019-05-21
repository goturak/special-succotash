/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_MOTHER_HPP
#define SPECIAL_SUCCOTASH_MOTHER_HPP

#include <typeinfo>
#include "FamilyMember.hpp"

class Mother : public FamilyMember{
public:
    Mother(string name) : FamilyMember(name){ }

    bool canDrive(){
        return true;
    }

    bool validation(list<Person*> *others){
        return true;
    }
};

#endif //SPECIAL_SUCCOTASH_MOTHER_HPP
