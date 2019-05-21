//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_FATHER_HPP
#define SPECIAL_SUCCOTASH_FATHER_HPP

#include "FamilyMember.hpp"

class Father : public FamilyMember{
public:
    bool canDrive(){
        return true;
    }
};

#endif //SPECIAL_SUCCOTASH_FATHER_HPP
