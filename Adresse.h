//
// Created by noure on 27/10/2023.
//

#ifndef TD1_BANQUE_ADRESSE_H
#define TD1_BANQUE_ADRESSE_H

class Adresse {

private:
    std::string rue;
    std::string ville;
    std::string codePostal;

public:
    Adresse(const std::string& rue, const std::string& ville, const std::string& codePostal);
    Adresse();

    // Getters
    std::string getRue() const ;
    std::string getVille() const ;
    std::string getCodePostal() const ;

    // Setters
    void setRue(const std::string& newRue) ;
    void setVille(const std::string& newVille) ;
    void setCodePostal(const std::string& newCodePostal) ;


};



#endif //TD1_BANQUE_ADRESSE_H
