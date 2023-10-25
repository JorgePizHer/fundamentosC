#include <stdio.h>

int sumar(){
    
    int operador1=2;
    int operador2=6;
    int suma = operador1 + operador2;
    
    return suma; 
}

int main (int argc,char *argv[]){
    
    printf("La suma es: %i \n",sumar());
    
    return 0;
}
