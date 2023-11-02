//
// Created by noure on 27/10/2023.
//
#include <iostream>
#include <string>
#include "Client.h"

Client::Client(const std::string& nom, const std::string& prenom, const Adresse& adresse)
        : nom(nom), prenom(prenom), adresse(adresse) {}
Client::Client() : nom(""), prenom(""), adresse(Adresse()) {}

std::string Client::getNom() const { return nom; }
std::string Client::getPrenom() const { return prenom; }
Adresse Client::getAdresse() const { return adresse; }

void Client::setNom(const std::string& newNom) { nom = newNom; }
void Client::setPrenom(const std::string& newPrenom) { prenom = newPrenom; }
void Client::setAdresse(const Adresse& newAdresse) { adresse = newAdresse; }