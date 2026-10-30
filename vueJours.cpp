#include <iostream>
#include <array>
#include <iomanip>
#include "vueJours.h"
using namespace std;

void AffichageJours() {
    const int nbMois = 12;
    const int nbJours = 7;
    array<char,nbJours> joursSemaine = {'L', 'M', 'M', 'J', 'V', 'S', 'D'};

    for (int i = 0; i < nbJours; i++) {

        cout << " " << joursSemaine[i] << " ";
    }
    cout << endl;
}