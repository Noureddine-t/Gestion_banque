#include <iostream>
#include "Client.h"
#include "Adresse.h"
#include "Operation.h"
#include "Compte.h"

using namespace std;
int main() {
    Adresse adresseClient("123 Rue de la Banque", "Ville", "12345");
    Client client("Jean", "Dupont", adresseClient);
    Compte comptes[10];  // Vous pouvez utiliser un tableau de taille fixe pour stocker les comptes.
    Operation operations[50];  // Vous pouvez utiliser un tableau de taille fixe pour stocker les opérations.

    std::cout << "Client: " << client.getNom() << " " << client.getPrenom() << std::endl;
    std::cout << "Adresse: " << client.getAdresse().getRue() << ", " << client.getAdresse().getVille() << " " << client.getAdresse().getCodePostal() << std::endl;
    std::cout << "Compte N°: " << comptes[0].getNumero() << ", Solde: " << comptes[0].getSolde() << " EUR" << std::endl;
    std::cout << "Dernière Opération: " << operations[0].getType() << ", Montant: " << operations[0].getMontant() << " EUR" << std::endl;

    return 0;
}
