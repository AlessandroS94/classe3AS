#include <iostream>

using namespace std;

/*
ESEMPIO DI CICLO IN C++ 
ESERCIZIO DI MOLTIPLICAZIONE SENZA OPERATORE *
*/

int main(){
    int x=5;
    int y=5;
    int result = 0;
    for (;y>0;y--)
    {
        result=result + x;
    }
    cout<<"Il prodotto è pari a: "<<result<<"\n";
    return 0;
}