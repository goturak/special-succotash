//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP
#define SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP

#include "Person.hpp"

class FamilyMember : public Person{
protected:
    FamilyMember(string name) : Person(name){}
};

#endif //SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP
