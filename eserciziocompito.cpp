#include <iostream>

using namespace std;

int main()
{
    float media = 0;
    int numeroInserito = 0;
    int tmp = 0;
    bool find = true;
    int i = 0;
    for (;i < 30;i++)
    {
        cout << "INSERISCI NUMERO" << endl;
        cin >> numeroInserito;
        if (numeroInserito < tmp)
        {   
            cout << "falso numero non crescente \n";
            media = (media + numeroInserito);
            cout << "media \n"<< media / i << endl;
            find = false;
            i = 40;
        }
        else
        {
            cout << "vero numero crescente \n";
            media = ((media + numeroInserito));
            tmp = numeroInserito;
        }
    }
    
    if (find)
    {
        cout << "media:" <<media / i << endl;
    }
}