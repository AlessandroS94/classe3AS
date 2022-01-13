#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int uscita = 0;
    while (uscita < 1)
    {
        float x1, x2, y1, y2;
        float risultato1;
        float risultato2;
        float risultato;
        cout << "inserisci x1 \n ";
        cin >> x1;
        cout << "inserisci x2 \n";
        cin >> x2;
        cout << "inserisci y1 \n";
        cin >> y1;
        cout << "inserisci y2 \n";
        cin >> y2;
        risultato1 = x2 - x1;
        risultato1 = risultato1 * risultato1;
        risultato2 = y2 - y1;
        risultato2 = risultato2 * risultato2;
        risultato = risultato1 + risultato2;
        risultato = sqrt(risultato);
        cout << "risultato" << risultato << endl;
        cout << " se vuoi smettere di eseguire il ciclo inserisci 1 se vuoi continuare inserisci 0 \n";
        cin >> uscita;
    }
}
