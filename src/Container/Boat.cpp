/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */


#include <iostream>
#include "Boat.hpp"
using namespace std;

bool Boat::hasDriver() {
    list<Person*> *p = getPerson();
    //We iterate on every person on the boat.
    for(list<Person*>::iterator it = p->begin(); it != p->end(); it++){
        //We check if they can drive.
        if((*it)->canDrive()){
            return true;
        }
    }
    return false;
}

bool Boat::isLeft() {
    return currentBank == left;
}

bool Boat::move() {
    //We check if the boat can move.
    if(hasDriver()) {
        //We change the current bank if it is the case, and return true;
        if (left == currentBank) {
            currentBank = right;
        } else {
            currentBank = left;
        }
        return true;
    } else {
        return false;
    }
}

Bank* Boat::getCurrentBank(){
    return currentBank;
}

bool Boat::embark(Person *p) {
    //We check if the current bank contains the wanted person.
    if (currentBank->contains(p)) {
        //If this is the case, we check that there is still some place in the boat.
        if (getPerson()->size() < 2) {
            //We add the person to the boat, and remove it from the bank
            push_back(p);
            currentBank->pop(p);
        } else {
            return false;
        }
    } else {
        return false;
    }
    return true;
}

bool Boat::debark(Person *p) {
    //We check if the person is on the boat
    if(contains(p)) {
        //If this is the case, we add the guy to the bank, and remove it from the boat.
        currentBank->push_back(p);
        pop(p);
        return true;
    } else {
        return false;
    }
}