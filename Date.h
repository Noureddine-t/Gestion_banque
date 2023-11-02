//
// Created by noure on 02/11/2023.
//

#ifndef TD1_BANQUE_DATE_H
#define TD1_BANQUE_DATE_H


#include <iostream>
#include <string>

class Date {

private:
    int jour;
    int mois;
    int annee;

public:

    Date(int jour, int mois, int annee);
    Date();

    // Getters
    int getJour() const ;
    int getMois() const;
    int getAnnee() const;

    // Setters
    void setJour(int newJour) ;
    void setMois(int newMois) ;
    void setAnnee(int newAnnee) ;


};



#endif //TD1_BANQUE_DATE_H
