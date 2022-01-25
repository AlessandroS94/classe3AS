#include <iostream>

using namespace std;

int max (int a, int b){
    if(a>b){
        return a;
    }
    else
        return b;
}
void stampa(int m){
    cout << m<<endl;
}
int main(){
    int input1, input2,input3,input4;
    cout<<"Inserisci input 1"<<endl;
    cin>>input1;
    cout<<"Inserisci input 2"<<endl;
    cin>>input2;
    cout<<"Inserisci input 3"<<endl;
    cin>>input3;
    cout<<"Inserisci input 4"<<endl;
    cin>>input4;
    stampa (max(max(input1,input2),max(input3,input4)));
    return 0;
}

