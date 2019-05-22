/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_PERSON_HPP
#define SPECIAL_SUCCOTASH_PERSON_HPP

#include <string>

using namespace std;

/**
 * Abstract class representing a person.
 */
class Person {
private:
    /**
     * The name of the person
     */
    string name;

protected:
    /**
     * Constructor, setting the name.
     * @param name the name of the person.
     */
    Person(string name){
        this->name = name;
    }

public:
    /**
     * Pure virtual method used to know if the person can drive the boat or not.
     * @return a boolean that indicate if the person can drive the boat or not.
     */
    virtual bool canDrive() = 0;

    /**
     * Method toString
     * @return the name of the person.
     */
    string toString() const{
        return name;
    }

    /**
     * Pure virtual method used to check if the person respect its rules.
     * @param others persons that are in the container.
     * @return true if the rules are valid, false otherwise.
     */
    virtual bool validation(list<Person*> *others) = 0;

    /**
     * Override of the == operator
     * @param a the first operand
     * @param b the second operand
     * @return true if both person have the same name, false otherwise.
     */
    friend bool operator==(const Person &a, const Person &b){
        return a.toString() == b.toString();
    }

    /**
     * Override of the != operator
     * @param a the first operand
     * @param b the second operand
     * @return false if both have the same name, true otherwise.
     */
    friend bool operator!=(const Person &a, const Person &b){
        return !(a.toString() == b.toString());
    }
};


#endif //SPECIAL_SUCCOTASH_PERSON_HPP
