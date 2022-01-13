#include <iostream>
using namespace std;

int main() {
    const double PIGRECO=3.14;
    float r, area, circonferenza;
    cout<<"Inserisci il raggio del cerchio: \t"<<endl;
    cin>>r;
    area=r*r*PIGRECO;
    circonferenza=2*PIGRECO*r;
    cout<<"L'area e': \t"<<area<<endl;
    cout<<"La circonferenza e': \t"<<circonferenza<<endl;	
    return 0;
}

