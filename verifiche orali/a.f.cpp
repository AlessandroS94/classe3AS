#include <iostream>

using namespace std;

int main(){
float somma=0, media, voto;
int alunni;
char continua='y';
while(continua=='y' || continua=='Y'){
	somma=0;
	cout<<"Inserire il numero degli alunni: ";
	cin>>alunni;
	for (int i=1; i<=alunni; i++){
		cout<<"Inserire il voto del "<<i<<"° alunno: ";
		cin>>voto;
		while (voto<1 || voto>10){
			cout<<"Voto non valido. I voti vanno dall'1 al 10\n";
			cout<<"Reinserisci il voto del "<<i<<"° alunno: ";
			cin>>voto;
		}
		somma+=voto;
	}
	media=somma/alunni;
	cout<<"La media dei voti è "<<media<<"\n\n";
	cout<<"Vuoi continuare [Y/N]? ";
	cin>>continua;
}
cout<<"Programma terminato. Chiudere la finestra di esecuzione!";
}
