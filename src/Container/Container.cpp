/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#include "Container.hpp"

Person* Container::pop(Person *p){
    //We find the person using the find method of stdl
    list<Person*>::iterator result = std::find(persons->begin(), persons->end(), p);
    if(result == persons->end()){
        return nullptr;
    }
    //If the person is found, removes it
    persons->remove(p);
    return *result;
}

Person* Container::find(string name){
    //We iterate on the content of the container.
    for(list<Person*>::iterator it = persons->begin(); it != persons->end(); it++){
        //If we find a corresponding person, we return it
        if((*it)->toString()== name){
            return *it;
        }
    }
    return nullptr;
}

bool Container::contains(Person *p){
    //We iterate of the content of the container
    for(list<Person*>::iterator it = persons->begin(); it != persons->end(); it++){
        //if we find the right person, return true.
        if((*it) == p){
            return true;
        }
    }
    return false;
}

void Container::push_back(Person *p){
    persons->push_back(p);
}

list<Person*>* Container::getPerson(){
    return persons;
}