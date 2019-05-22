/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#include "Daughter.hpp"

bool Daughter::validation(list<Person*> *others){
    //For every daughter, we must check if there is the father and no mother there. If it is the case, the rules are
    //not respected, so we return false to the validation after the error message.
    bool father = false;
    bool noMother = true;
    //Iteration on every person.
    for(list<Person*>::iterator it = others->begin(); it != others->end(); it++){
        if(dynamic_cast<Mother*>(*it) != NULL){
            noMother = false;
        }
        if(dynamic_cast<Father*>(*it) != NULL){
            father = true;
        }
    }
    //Checking if the rule is broken
    if(father && noMother){
        cout << "### fille avec son père sans sa mere" << endl << endl;
        return false;
    } else {
        return true;
    }

}