#include <iostream>

using namespace std;

int main()
{
    char parolaUscita;
    int numero;
    double result;
    long result3;
    cout << "esempio di menù"<<endl;
    for (;;)
    {
        float result2 = 2;
        cout << "Vuoi uscire ? (Y/N): \t";
        cin >> parolaUscita;
        if (parolaUscita == 'N'){
            cout <<"Voglio fare un gioco con te XD \n";
            cout << "Quanto fa 2^3?"<<endl;
            cin >> result3;
            numero = 1;
            while (numero < 3)
            {
                result2 *=2;
                numero ++ ;
            }
            if (result3 == result2){
                cout << "BRAVO"<<endl;
                break;
            }
            else
                cout<< "MALE"<<endl;

        }
        if (parolaUscita == 'Y')
        {
            cout << "OK" <<endl;
            break;
        }
        else
            cout << "Devi inserire o Y o N"<<endl;
        
    }
    return 0;
}