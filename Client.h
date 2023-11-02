//
// Created by noure on 27/10/2023.
//

#ifndef TD1_BANQUE_CLIENT_H
#define TD1_BANQUE_CLIENT_H

#include "Adresse.h"

class Client {

private:
    std::string nom;
    std::string prenom;
    Adresse adresse;

public:
    Client(const std::string& , const std::string& , const Adresse& );
    Client();

    std::string getNom() const;
    std::string getPrenom() const;
    Adresse getAdresse() const;

    void setNom(const std::string& newNom);
    void setPrenom(const std::string& newPrenom);
    void setAdresse(const Adresse& newAdresse);

};


#endif //TD1_BANQUE_CLIENT_H
