//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_FATHER_HPP
#define SPECIAL_SUCCOTASH_FATHER_HPP

#include <typeinfo>
#include "FamilyMember.hpp"

class Father : public FamilyMember{
public:
    Father(string name) : FamilyMember(name){ }

    bool canDrive(){
        return true;
    }

    bool validation(list<Person*> *others){
        return true;
    }
};

#endif //SPECIAL_SUCCOTASH_FATHER_HPP
