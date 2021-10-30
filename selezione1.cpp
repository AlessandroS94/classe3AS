#include <iostream>

using namespace std;

int main()
{
    float a, b;
    cout << "Divisione tra due numeri\n";
    cout << "Inserisci il primo termine:\t";
    cin >> a;
    cout << "Inserisci il secondo termine:\t";
    cin >> b;
    if (b > 0)
    {
        a = a / b;
        cout << "Il risultato è pari a " << a << endl;
    }
    else
    {
        cout << "La devisione con zero non è consentita"<<endl;
    }
}
