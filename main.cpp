#include <iostream>
#include "Client.h"
#include "Adresse.h"
#include "Operation.h"
#include "Compte.h"
#include "Date.h"

using namespace std;
int main() {
    Adresse adresseClient("123 Rue de la Banque", "Ville", "12345");
    Client client("Jean", "Dupont", adresseClient);
    Compte comptes[10];  // Vous pouvez utiliser un tableau de taille fixe pour stocker les comptes.
    Operation operations[50];  // Vous pouvez utiliser un tableau de taille fixe pour stocker les opérations.
    Date date1;  // Date avec la valeur par défaut (01/01/1970)
    Date date2(15, 6, 2023);  // Date avec des valeurs spécifiées


    std::cout << "Client: " << client.getNom() << " " << client.getPrenom() << std::endl;
    std::cout << "Adresse: " << client.getAdresse().getRue() << ", " << client.getAdresse().getVille() << " " << client.getAdresse().getCodePostal() << std::endl;
    std::cout << "Compte Num: " << comptes[0].getNumero() << ", Solde: " << comptes[0].getSolde() << " EUR" << std::endl;
    std::cout << "Derniere operation: " << operations[0].getType() << ", Montant: " << operations[0].getMontant() << " EUR" << std::endl;
    std::cout << "Date 1: " << date1.getJour() << "/" << date1.getMois() << "/" << date1.getAnnee() << std::endl;
    std::cout << "Date 2: " << date2.getJour() << "/" << date2.getMois() << "/" << date2.getAnnee() << std::endl;

    return 0;
}
