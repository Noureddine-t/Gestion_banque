//
// Created by noure on 02/11/2023.
//

#include <iostream>
#include <string>
#include "Compte.h"


Compte::Compte(int numero, double solde, Client titulaire)
        : numero(numero), solde(solde), titulaire(titulaire) {}
Compte::Compte() : numero(0), solde(0.0), titulaire(Client()) {}

int Compte::getNumero() const { return numero; }
double Compte::getSolde() const { return solde; }
Client Compte::getTitulaire() const { return titulaire; }

void Compte::setNumero(int newNumero) { numero = newNumero; }
void Compte::setSolde(double newSolde) { solde = newSolde; }
void Compte::setTitulaire(const Client& newTitulaire) { titulaire = newTitulaire; }