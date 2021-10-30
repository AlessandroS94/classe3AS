#include <iostream>

using namespace std;

int main()
{
    char uscita;
    while (true)
    {
        cout << "Inserisci Y per uscire dal ciclo\n";
        cin >> uscita;
        // selezione se il carattere inserito è pari a Y allora esegue
        // il break ed esce
        // break utilizzato come uscita forza dal ciclo  
        if (uscita == 'Y')
            break;
    }
    cout << "uscita\n";
}