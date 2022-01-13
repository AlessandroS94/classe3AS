#include <iostream>

using namespace std;

int main()
{
    int a,b,alfa,beta,uscita=0,perimetro=0;
    while(uscita<1)
    {
	    for(int cont=0;cont<2;cont++)
	    {
		    cout<<"Inserisci il primo lato:\t";
		    cin>>a;
		    cout<<"Inserisci il secondo lato:\t";
		    cin>>b;
	    	cout<<"Inserisci il primo angolo:\t";
		    cin>>alfa;
		    cout<<"Inserisci il secondo angolo:\t";
	    	cin>>beta;
	    	perimetro=perimetro+a;
	    	perimetro=perimetro+b;
	    }
	    if(perimetro==a*4)
	    {
	        cout<<"*************************************************\n*\t\t\t\t\t\t*"<<endl;
	    	cout<<"*\tIL QUADRILATERO HA I LATI UGUALI\t*\n*\t\t\t\t\t\t*"<<endl;
	    	cout<<"*************************************************"<<endl;
		    if((alfa==90)&&(alfa==beta))
	        {
		    	cout<<"*************************************************\n*\t\t\t\t\t\t*"<<endl;
		    	cout<<"*\tLA FIGURA È UN QUADRATO\t\t\t*\n*\t\t\t\t\t\t*"<<endl;
		    	cout<<"*************************************************"<<endl;
		    }
	        else
		    {
		        cout<<"*************************************************\n*\t\t\t\t\t\t*"<<endl;
		        cout<<"*\tLA FIGURA È UN ROMBO\t\t\t*\n*\t\t\t\t\t\t*"<<endl;
		        cout<<"*************************************************"<<endl;
		    }
	    }
	    else
	    {
		    cout<<"*********************************************************\n*\t\t\t\t\t\t\t*"<<endl;
	     	cout<<"*\tIL QUADRILATERO NON HA TUTTI I LATI UGUALI\t*\n*\t\t\t\t\t\t\t*"<<endl;
		    cout<<"*********************************************************"<<endl;
		    if(alfa==90)
		    {
		        cout<<"*************************************************\n*\t\t\t\t\t\t*"<<endl;
		        cout<<"*\tLA FIGURA È UN RETTANGOLO\t\t*\n*\t\t\t\t\t\t*"<<endl;
		        cout<<"*************************************************"<<endl;
		    }
		    else 
		    {
		        cout<<"*********************************************************************************\n*\t\t\t\t\t\t\t\t\t\t*"<<endl;
		        cout<<"*\tIL QUADRILATERO NON È NÉ UN QUADRATO, NÉ UN ROMBO, NÉ UN RETTANGOLO\t*\n*\t\t\t\t\t\t\t\t\t\t*"<<endl;
		        cout<<"*********************************************************************************"<<endl;
		    }
	    }
	    cout<<"*************************************************\n*\t\t\t\t\t\t*"<<endl;
	    cout<<"*\t\tIL PERIMETRO È:"<<perimetro;
	    cout<<"\t\t*\n*\t\t\t\t\t\t*"<<endl;
	    cout<<"*************************************************"<<endl;
	    cout<<"Se vuoi continuare inserisci 0 altrimenti inserisci 1:\t";
	    cin>>uscita;
    }

    return 0;
}
