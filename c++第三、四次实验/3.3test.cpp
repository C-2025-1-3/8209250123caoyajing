#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2); 
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;

    double cel = 40.0;

    double fah = 120.0;

    for (int i = 0; i < 10; i++) {

        cout << setw(7) << cel << setw(13) << celsius_to_fah(cel);

        cout << "   |   ";

        cout << setw(10) << fah << setw(15) << fahrenheit_to_cels(fah) << endl;

        cel -= 1.0;
        fah -= 10.0;
    }

    return 0;
}