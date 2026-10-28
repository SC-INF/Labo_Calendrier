#include <iostream>
#include <string>
#include "SaisieUtilisateur.h"

using namespace std;

int main() {
    const int min = 1800;
    const int max = 2100;
    string demande = "Entrer une valeur [1800 - 2100]";

    cout << "Bienvenue dans le calendrier universel" << '\n';
    int anneeSaisie = SaisieDate(demande, min, max);

    bool estBissextile =  ((anneeSaisie % 4 == 0 && anneeSaisie / 100 != 0) || (anneeSaisie % 400 == 0));

    cout << boolalpha << estBissextile << endl;
}