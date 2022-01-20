#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    while (i < 1)
    {
        cout << "Inserisci il lato 1" << endl;
        int l1;
        cin >> l1;
        cout << "Inserisci il lato 2" << endl;
        int l2;
        cin >> l2;
        cout << "Inserisci il lato 3 " << endl;
        int l3;
        cin >> l3;
        if (l1 == l2 && l2 == l3 && l1 == l3)
        {
            cout << "Equilatero" << endl;
        }
        else
        {
            if (l1 == l2 || l1 == l3 || l2 == l3)
            {
                cout << "Isoscele" << endl;
            }
            else
            {
                cout << "Scaleno" << endl;
            }
        }
        cout << "Inserisci 1 per uscire 0 altrimenti"<<endl;
        cin >>i;
    }
    return 0;
}