#include <iostream>

using namespace std;

int main()
{
    cout << "ESERCIZIO DIVISIONE TRA 2 INTERI USANDO SOLO SOMMA E SOTTRAZIONE\n";
    int risultato = 0, resto = 0,num_1,num_2;
    cout << "Inserisci il primo termine:\t";
    cin >> num_1;
    cout << "Inserisci il secondo termine:\t";
    cin >> num_2;
    resto = num_1;
    while (resto > 0)
    {
        resto = resto - num_2;
        risultato++;
    }

    cout << "il risultato pari a " << risultato<< endl;
}