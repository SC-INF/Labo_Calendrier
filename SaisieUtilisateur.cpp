#include <iostream>
#include <string>
#include "SaisieUtilisateur.h"

using namespace std;

int SaisieDate(string demande, int min, int max) {
    int valSaisie{0};

    while (true) {
        cout << demande << " ";
        cin >> valSaisie;

        if (valSaisie >= min && valSaisie <= max) {
            return valSaisie;
        }
        else {
            cout << "Saisie incorrect" << '\n';
        }
    }

}