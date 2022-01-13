#include<iostream>
using namespace std;

int main() {
	int a,b,c;
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	cout<<"Inserisci il secondo numero: ";
	cin>>b;
	cout<<"Inserisci il terzo numero: ";
	cin>>c;
	
	if(a>b)
		if(a>c)
	    		cout<<"Il numero maggiore e': "<<a;
	    	else
	    		cout<<"Il numero maggiore e': "<<c;
	else 
		if (b>c)
	    		cout<<"Il numero maggiore e': "<<b;
		else
			cout<<"Il numero maggiore e': "<<c;
	return 0;
}




