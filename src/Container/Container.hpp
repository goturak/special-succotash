/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_CONTAINER_HPP
#define SPECIAL_SUCCOTASH_CONTAINER_HPP

#include <list>
#include <algorithm>
#include "../Person/Person.hpp"

using namespace std;

/**
 * Abstract class representing a container of persons.
 */
class Container {
private:
    //The persons contained in the container
    list<Person*>* persons;

protected:
    /**
     * Default constructor of the container, used to set the persons to a new list of persons.
     */
    Container() : persons(new list<Person*>){}

public:
    /**
     * Getter of the persons.
     * @return the list of persons in the container.
     */
    list<Person*>* getPerson();

    /**
     * Method used to add a person to the list
     * @param p a pointer on the person we want to add.
     */
    void push_back(Person *p);

    /**
     * Method used to remove a specific person from the container
     * @param p the person we want to remove
     * @return the person we just removed.
     */
    Person* pop(Person *p);

    /**
     * Method used to find a person using it's name
     * @param name the name of the person we want to find in the container
     * @return the person if we found it, nullptr otherwise.
     */
    Person* find(string name);

    /**
     * Method used to know if this container contains a person
     * @param p the person we want to know if it is in the container.
     * @return a boolean set as true if the person is in the container, false otherwise.
     */
    bool contains(Person *p);
};


#endif //SPECIAL_SUCCOTASH_CONTAINER_HPP
