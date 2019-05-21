//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_CHILDREN_HPP
#define SPECIAL_SUCCOTASH_CHILDREN_HPP

#include "FamilyMember.hpp"

class Children : public FamilyMember{
protected:
    Children(string name) : FamilyMember(name){

    }

public:
    bool canDrive(){
        return false;
    }
};

#endif //SPECIAL_SUCCOTASH_CHILDREN_HPP
