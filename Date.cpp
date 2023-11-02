//
// Created by noure on 02/11/2023.
//

#include "Date.h"

Date::Date() : jour(1), mois(1), annee(2023) {}

Date::Date(int jour, int mois, int annee)
        : jour(jour), mois(mois), annee(annee) {}

// Getters
int Date::getJour() const { return jour; }
int Date::getMois() const { return mois; }
int Date::getAnnee() const { return annee; }

// Setters
void Date::setJour(int newJour) { jour = newJour; }
void Date::setMois(int newMois) { mois = newMois; }
void Date::setAnnee(int newAnnee) { annee = newAnnee; }