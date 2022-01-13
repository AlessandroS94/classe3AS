#include <iostream>

using namespace std;

int main()
{
    int uscita=0;
    while(uscita<1)
    {
    int a;
    int b;
    int c;
    cout<< "Inserisci primo lato \n";
    cin>> a;
    cout<< "Inserisci secondo lato \n";
    cin>> b;
    cout<< "Inserisci terzo lato \n";
    cin>> c;
    if ((a==b)&& (b==c))
    {
        
        cout<< "triangolo equilatero \n";
    }
    else 
    {
        cout<< "triangolo non equilatero \n";
    }
    cout<<"se vuoi smettere di eseguire il ciclo inserisci 1 se vuoi continuare metti 0 \n";
    cin>>uscita;
    }
}

