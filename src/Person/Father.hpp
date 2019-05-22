/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_FATHER_HPP
#define SPECIAL_SUCCOTASH_FATHER_HPP

#include <typeinfo>
#include "FamilyMember.hpp"

/**
 * Class representing a father, inheriting from family member
 */
class Father : public FamilyMember{
public:
    /**
     * Constructor, calling the constructor from family member.
     * @param name the name of the person.
     */
    Father(string name) : FamilyMember(name){ }

    /**
     * Override of the canDrive method, always return true.
     * @return true.
     */
    bool canDrive(){
        return true;
    }

    /**
     * Method used to check if the rules are valid. Since the father have no rule of his own, this method returns true.
     * @param others
     * @return true.
     */
    bool validation(list<Person*> *others){
        return true;
    }
};

#endif //SPECIAL_SUCCOTASH_FATHER_HPP
