//
// Created by guillaume on 21/05/19.
//

#include "Container.hpp"

Person* Container::pop(Person *p){
    list<Person*>::iterator result = std::find(persons->begin(), persons->end(), p);
    if(result == persons->end()){
        return nullptr;
    }
    persons->remove(p);
    return *result;
}

Person* Container::find(string name){
    for(list<Person*>::iterator it = persons->begin(); it != persons->end(); it++){
        if((*it)->toString()== name){
            return *it;
        }
    }
    return nullptr;
}

bool Container::contains(Person *p){
    for(list<Person*>::iterator it = persons->begin(); it != persons->end(); it++){
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