/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP
#define SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP

#include "Person.hpp"

/**
 * Abstract class representing a family member, inheriting from person.
 */
class FamilyMember : public Person{
protected:
    /**
     * Protected constructor, taking a name as parameter, and calling Person's constructor.
     * @param name the name of the family member.
     */
    FamilyMember(string name) : Person(name){}
};

#endif //SPECIAL_SUCCOTASH_FAMILYMEMBER_HPP
