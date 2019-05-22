/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_DAUGHTER_HPP
#define SPECIAL_SUCCOTASH_DAUGHTER_HPP

#include <list>
#include "Children.hpp"
#include "Father.hpp"
#include "Mother.hpp"
#include <iostream>

/**
 * Class representing a daughter, inheriting from children.
 */
class Daughter : public Children{
public:
    /**
     * Costructor, taking a name as parameter and calling the constructor from children.
     * @param name the name of daughter.
     */
    Daughter(string name) : Children(name){}

    /**
     * Method used to check if the rule is broken within the other persons with this one.
     * @param others the other persons in the container
     * @return true if no rule are broken, false otherwise.
     */
    bool validation(list<Person*> *others);
};

#endif //SPECIAL_SUCCOTASH_DAUGHTER_HPP
