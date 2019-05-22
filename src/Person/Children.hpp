/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_CHILDREN_HPP
#define SPECIAL_SUCCOTASH_CHILDREN_HPP

#include "FamilyMember.hpp"

/**
 * Abstract class representing a children, inheriting from Family member
 */
class Children : public FamilyMember{

protected:
    /**
     * Constructor, calling the family member constructor.
     * @param name the name of the person.
     */
    Children(string name) : FamilyMember(name){}

public:
    /**
     * This method is a pure virtual method in person and is override here to
     * signal that children can not drive the boat
     * @return
     */
    bool canDrive(){
        return false;
    }
};

#endif //SPECIAL_SUCCOTASH_CHILDREN_HPP
