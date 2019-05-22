/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#include "Robber.hpp"


bool Robber::validation(list<Person*> *others){
    //For every robber, we must check if there is a family member and no policeman there. If it is the case, the rules are
    //not respected, so we return false to the validation after the error message.
    bool familyMember = false;
    bool noPoliceman = true;
    //Iteration on every person in the container.
    for(list<Person*>::iterator it = others->begin(); it != others->end(); it++){
        if(dynamic_cast<Policeman*>(*it) != NULL){
            noPoliceman = false;
        }
        if(dynamic_cast<FamilyMember*>(*it) != NULL){
            familyMember = true;
        }
    }
    //We check if the rule is broken, returning false if this is the case.
    if(noPoliceman && familyMember){
        cout << "### voleur avec un membre de la famille sans le policier" << endl << endl;
        return false;
    } else {
        return true;
    }
}