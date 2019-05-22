/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_ROBBER_HPP
#define SPECIAL_SUCCOTASH_ROBBER_HPP


#include <list>
#include "Policeman.hpp"
#include "FamilyMember.hpp"
#include <iostream>

/**
 * Class representing a robber, inheriting from person.
 */
class Robber : public Person{
public:
    /**
     * Constructor of robber, taking a name as parameter and calling person's constructor.
     * @param name the name of the robber.
     */
    Robber(string name) : Person(name){}

    /**
     * Override of the canDrive method.
     * @return false
     */
    bool canDrive(){
        return false;
    }

    /**
     * Method used to check if the rule concerning the robber is broken or not.
     * @param others the other persons in the container.
     * @return false if the rules are broken, true otherwise.
     */
    bool validation(list<Person*> *others);

};


#endif //SPECIAL_SUCCOTASH_ROBBER_HPP
