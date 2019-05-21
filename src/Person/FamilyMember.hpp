/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP
#define SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP

#include "Person.hpp"

class FamilyMember : public Person{
protected:
    FamilyMember(string name) : Person(name){}
};

#endif //SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP
