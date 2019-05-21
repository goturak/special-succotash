//
// Created by guillaume on 21/05/19.
//

#include <iostream>
#include "Controller.hpp"
using namespace std;

void Controller::showMenu(){
    cout << "p\t\t: afficher" << endl;
    cout << "e <nom>\t: embarquer <nom>" << endl;
    cout << "d <nom>\t: debarquer <nom>" << endl;
    cout << "m\t\t: deplacer bateau" << endl;
    cout << "r\t\t: reinitialiser" << endl;
    cout << "q\t\t: quitter" << endl;
    cout << "h\t\t: menu" << endl;

}

void Controller::display(){
    cout << "----------------------------------------------------------" << endl;
    cout << "Gauche: ";
    for(list<Person*>::iterator it = bankLeft.getPerson()->begin(); it != bankLeft.getPerson()->end(); it++){
        cout << (*it)->toString() + " ";
    }
    cout << endl;

    if(boat.isLeft()) {
        cout << "----------------------------------------------------------" << endl;
        cout << "Bateau: < ";
        for (list<Person *>::iterator it = boat.getPerson()->begin(); it != boat.getPerson()->end(); it++) {
            cout << (*it)->toString() + " ";
        }
        cout << ">";
        cout << endl;
        cout << "===========================================================" << endl;
        cout << endl;
    } else {
        cout << "----------------------------------------------------------" << endl;
        cout << endl;
        cout << "===========================================================" << endl;
        cout << "Bateau: < ";
        for (list<Person *>::iterator it = boat.getPerson()->begin(); it != boat.getPerson()->end(); it++) {
            cout << (*it)->toString() + " ";
        }
        cout << ">";
        cout << endl;
    }

    cout << "----------------------------------------------------------" << endl;
    cout << "Droite: ";
    for(list<Person*>::iterator it = bankRight.getPerson()->begin(); it != bankRight.getPerson()->end(); it++){
        cout << (*it)->toString() + " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
}

bool Controller::nextTurn(){
    string command;
    getline(cin, command);
        switch(command.front()){
        case 'p':
            display();
            break;
        case 'e': {
            command.erase(0, 2);
            if(boat.getCurrentBank()->contains(command)) {
                Person *p = boat.getCurrentBank()->find(command);
                if(boat.embark(p)) {
                    display();
                } else {
                    cout << "### This person cannot embark on the boat." << endl << endl;
                }
            } else {
                cout << "### This person is not on the current bank." << endl << endl;
            }
            break;
        }
        case 'd':
            break;
        case 'm':
            if(boat.move()){
                display();
            } else {
                cout << "### No driver in the boat."<< endl << endl;
            }
            break;
        case 'r':
            reset();
            display();
            break;
        case 'q':
            return false;
        case 'h':
            showMenu();
            break;
        default:
            cout << "### Invalid command" << endl;
    }
}

void Controller::reset(){
    bankRight = Bank();
    bankLeft = Bank();
    turn = 0;
    bankLeft.push_back(new Father("pere"));
    bankLeft.push_back(new Mother("mere"));
    bankLeft.push_back(new Son("paul"));
    bankLeft.push_back(new Son("pierre"));
    bankLeft.push_back(new Daughter("julie"));
    bankLeft.push_back(new Daughter("jeanne"));
    bankLeft.push_back(new Policeman("policier"));
    bankLeft.push_back(new Robber("voleur"));
    boat = Boat(&bankLeft, &bankRight);
}