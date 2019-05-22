/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#include <iostream>
#include <list>
#include "../Person/Person.hpp"
#include "../Person/Mother.hpp"
#include "../Person/Father.hpp"
#include "../Person/Son.hpp"
#include "../Person/Daughter.hpp"
#include "../Person/Policeman.hpp"
#include "../Person/Robber.hpp"
#include "Controller.hpp"

using namespace std;

int main() {
    //We create a controller
    Controller* controller = new Controller();
    //While the user didnt decide to quit, we continue to take a next turn.
    while(controller->nextTurn()){}
    //If the game is over, we delete controller.
    delete controller;
    //We exit the program
    exit(0);
}