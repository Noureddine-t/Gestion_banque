//
// Created by noure on 02/11/2023.
//

#include <iostream>
#include <string>
#include "Operation.h"

Operation::Operation(const std::string& type, double montant)
        : type(type), montant(montant) {}
Operation::Operation() : type(""), montant(0.0) {}

std::string Operation::getType() const { return type; }
double Operation::getMontant() const { return montant; }

void Operation::setType(const std::string& newType) { type = newType; }
void Operation::setMontant(double newMontant) { montant = newMontant; }