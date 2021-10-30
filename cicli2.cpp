#include <iostream>

using namespace std;

/*
ESEMPIO DI CICLO IN C++ 
ESERCIZIO DI MOLTIPLICAZIONE SENZA OPERATORE *
*/

int main(){
    int x;
    int y;
    int result = 0;
    cout<<"ESEMPIO MOLTIPLICAZIONE USANDO L'ADDIZIONE \n";
    cout<<"Iserisci il primo fattore:\t";
    cin>>x;
    cout<<"Inserisci il secondo fattore:\t";
    cin>>y;
    for (;y>0;y--)
    {
        result=result + x;
    }
    cout<<"Il prodotto è pari a: "<<result<<"\n";
    return 0;
}