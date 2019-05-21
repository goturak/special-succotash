/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_BOAT_HPP
#define SPECIAL_SUCCOTASH_BOAT_HPP


#include "Container.hpp"
#include "Bank.hpp"

/**
 * Class representing a boat, inheriting from Container.
 */
class Boat : public Container{
private:
    Bank* left;
    Bank* right;
    Bank* currentBank;
public:
    /**
     * Constructor, taking both bank as parameter.
     * @param l the left bank
     * @param r the right bank
     */
    Boat(Bank* l, Bank* r) : Container(), left(l), right(r), currentBank(l){ }

    /**
     * Method used to check if a boat has a driver
     * @return a boolean that tells if the boat has a driver.
     */
    bool hasDriver();

    /**
     * Method used to check if the boat is on the left bank
     * @return a boolean that tells if the boat is on the left bank.
     */
    bool isLeft();

    /**
     * Method used to move the boat
     * @return a boolean that tells if the movement succeeded
     */
    bool move();

    /**
     * Getter of the current bank
     * @return the current bank
     */
    Bank* getCurrentBank();

    /**
     * Method used to embark people on the boat.
     * @param p the person that we want to put on the boat
     * @return a boolean that tells if the boarding succeeded.
     */
    bool embark(Person *p);

    /**
     * Method used to debark people from the boat.
     * @param p the person we want to put on the bank.
     * @return a boolean that tells if the person has successfully been loaded off.
     */
    bool debark(Person *p);

};


#endif //SPECIAL_SUCCOTASH_BOAT_HPP
