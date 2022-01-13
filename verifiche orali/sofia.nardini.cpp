/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main(){
    std::cout << "calcolo area cerchio" << std::endl;
    std::cout << "Inserisci raggio" << std::endl;
    
    float r;
    std::cin >> r;
    
    std::cout << r << std::endl;
    // perchè l'uso di f ????? 
    float area = r*r* 3.14f;
    std::cout << "L'area del cerchio è:" <<area<< std::endl;

    return 0;
}
