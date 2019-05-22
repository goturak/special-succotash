/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_POLICEMAN_HPP
#define SPECIAL_SUCCOTASH_POLICEMAN_HPP

#include <list>
#include "Person.hpp"

/**
 * Class representing a policeman, inheriting from person.
 */
class Policeman : public Person{
public:
    /**
     * Constructor taking a name as parameter, calling the constructor from  person
     * @param name the name of the policeman.
     */
    Policeman(string name) : Person(name){}

    /**
     * Override of the canDrive methode.
     * @return true
     */
    bool canDrive(){
        return true;
    }

    /**
     * Method used to check if the rules are valid. Since the policeman have no rule of his own,
     * this method returns true.
     * @param others
     * @return true.
     */
    bool validation(list<Person*> *others){
        return true;
    }

};

#endif //SPECIAL_SUCCOTASH_POLICEMAN_HPP
