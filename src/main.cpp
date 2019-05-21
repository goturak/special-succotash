#include <iostream>
#include <list>
#include "Person.hpp"
#include "Mother.hpp"
#include "Father.hpp"
#include "Son.hpp"
#include "Daughter.hpp"
#include "Policeman.hpp"
#include "Robber.hpp"
#include "Controller.hpp"

using namespace std;

int main() {
    Controller* controller = new Controller();
    while(controller->nextTurn()){}

    delete controller;
    exit(0);
}