//
// Created by noure on 02/11/2023.
//

#ifndef TD1_BANQUE_COMPTE_H
#define TD1_BANQUE_COMPTE_H

#include "Client.h"

class Compte {

private:
    int numero;
    double solde;
    Client titulaire;

public:
    Compte(int numero, double solde, Client titulaire);
    Compte();

    // Getters
    int getNumero() const ;
    double getSolde() const;
    Client getTitulaire() const ;

    // Setters
    void setNumero(int newNumero) ;
    void setSolde(double newSolde) ;
    void setTitulaire(const Client& newTitulaire) ;


};

#endif //TD1_BANQUE_COMPTE_H
