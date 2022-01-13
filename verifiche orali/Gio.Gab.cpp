/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   //??????Hello World
    cout<<"Hello World";
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

    