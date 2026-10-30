#include <iostream>
#include <iomanip>
#include "vueMois.h"
using namespace std;

void AffichageMois(size_t joursTot) {
    const size_t joursSemaine = 7;

    for (size_t jour = 1; jour <= joursTot; jour++) {
        cout << setw(2) << jour << ' ';

        if (jour % joursSemaine == 0) {
            cout << '\n';
        }
    }

    cout << endl;
}