#include <iostream>
#include <string>
#include <array>
#include "SaisieUtilisateur.h"
#include "vueJours.h"
#include "vueMois.h"

using namespace std;

int main() {
    const int min = 1800;
    const int max = 2100;
    const int nbMois = 12;
    array<int,nbMois> joursParMois{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string demande = "Entrer une valeur [1800 - 2100]";
    array<string,nbMois> moisAnnee = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet",
    "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};

    cout << "Bienvenue dans le calendrier universel" << '\n';
    
    int anneeSaisie = SaisieDate(demande, min, max);

    bool estBissextile =  ((anneeSaisie % 4 == 0 && anneeSaisie / 100 != 0) || (anneeSaisie % 400 == 0));
    
    if (estBissextile) {
        joursParMois[1] = 29;
    }

    for (size_t i = 0; i < nbMois; i++) {
        cout << moisAnnee[i] << " " << anneeSaisie << endl;
        AffichageJours();
        AffichageMois(joursParMois[i]);
        cout << '\n';
    }

    return 0;
}