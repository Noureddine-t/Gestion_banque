//
// Created by noure on 02/11/2023.
//

#ifndef TD1_BANQUE_OPERATION_H
#define TD1_BANQUE_OPERATION_H


class Operation {

private:
    std::string type;
    double montant;

public:
    Operation(const std::string& type, double montant);
    Operation();

    // Getters
    std::string getType() const ;
    double getMontant() const;

    // Setters
    void setType(const std::string& newType) ;
    void setMontant(double newMontant) ;


};

#endif //TD1_BANQUE_OPERATION_H
