/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_MOTHER_HPP
#define SPECIAL_SUCCOTASH_MOTHER_HPP

#include <typeinfo>
#include "FamilyMember.hpp"

/**
 * Class representing a mother, inheriting from family member.
 */
class Mother : public FamilyMember{
public:
    /**
     * Constructor, taking a name as parameter, calling the family member's constructor.
     * @param name the name of the mother.
     */
    Mother(string name) : FamilyMember(name){ }

    /**
     * Override of the canDrive method, always returns true.
     * @return true
     */
    bool canDrive(){
        return true;
    }

    /**
     * Method used to check if the rules are valid. Since the mother have no rule of her own, this method returns true.
     * @param others
     * @return true.
     */
    bool validation(list<Person*> *others){
        return true;
    }
};

#endif //SPECIAL_SUCCOTASH_MOTHER_HPP
