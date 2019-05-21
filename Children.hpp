//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_CHILDREN_HPP
#define SPECIAL_SUCCOTASH_CHILDREN_HPP

#include "FamilyMember.hpp"

class Children : public FamilyMember{

public:

    bool canDrive(){
        return false;
    }
};

#endif //SPECIAL_SUCCOTASH_CHILDREN_HPP
