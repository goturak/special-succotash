/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_BANK_HPP
#define SPECIAL_SUCCOTASH_BANK_HPP


#include "Container.hpp"

/**
 * Class representing a bank, inherited from container
 */
class Bank : public Container {
public:
    /**
     * Bank's Constructor, calling the default container constructor.
     */
    Bank() : Container(){}
};


#endif //SPECIAL_SUCCOTASH_BANK_HPP
