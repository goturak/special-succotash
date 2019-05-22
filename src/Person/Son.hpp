/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_SON_HPP
#define SPECIAL_SUCCOTASH_SON_HPP

#include <list>
#include "Children.hpp"
#include "Father.hpp"
#include "Mother.hpp"
#include <iostream>

/**
 * Class representing a son, inheriting from children.
 */
class Son : public Children{
public:
    /**
     * Constructor of the son, taking a name as parameter and calling chlidren's constructor.
     * @param name the name of the son.
     */
    Son(string name) : Children(name){}

    /**
     * Method used to check if the rule concerning the son is broken or not.
     * @param others the other persons in the container.
     * @return false if the rules are broken, true otherwise.
     */
    bool validation(list<Person*> *others);

};

#endif //SPECIAL_SUCCOTASH_SON_HPP
