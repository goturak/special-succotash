/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#include "Son.hpp"

bool Son::validation(list<Person*> *others){
    //For every son, we must check if there is the mother and no father there. If it is the case, the rules are
    //not respected, so we return false to the validation after the error message.
    bool mother = false;
    bool noFather = true;
    //Iteration of every person in the container.
    for(list<Person*>::iterator it = others->begin(); it != others->end(); it++){
        if(dynamic_cast<Father*>(*it) != NULL){
            noFather = false;
        }
        if(dynamic_cast<Mother*>(*it) != NULL){
            mother = true;
        }
    }
    //If the rule is broken, we write the error message and return false.
    if(noFather && mother){
        cout << "### garcon avec sa mère sans son pere" << endl << endl;
        return false;
    } else {
        return true;
    }
}