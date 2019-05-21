//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_MOTHER_HPP
#define SPECIAL_SUCCOTASH_MOTHER_HPP

#include "FamilyMember.hpp"

class Mother : public FamilyMember{

public:
    Mother(string name) : FamilyMember(name){

    }

    bool canDrive(){
        return true;
    }
};

#endif //SPECIAL_SUCCOTASH_MOTHER_HPP