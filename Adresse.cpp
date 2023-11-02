//
// Created by noure on 27/10/2023.
//

#include <iostream>
#include <string>
#include "Adresse.h"

Adresse::Adresse(const std::string& rue, const std::string& ville, const std::string& codePostal)
        : rue(rue), ville(ville), codePostal(codePostal) {}
Adresse::Adresse() : rue(""), ville(""), codePostal("") {}

std::string Adresse::getRue() const { return rue; }
std::string Adresse::getVille() const { return ville; }
std::string Adresse::getCodePostal() const { return codePostal; }

void Adresse::setRue(const std::string& newRue) { rue = newRue; }
void Adresse::setVille(const std::string& newVille) { ville = newVille; }
void Adresse::setCodePostal(const std::string& newCodePostal) { codePostal = newCodePostal; }