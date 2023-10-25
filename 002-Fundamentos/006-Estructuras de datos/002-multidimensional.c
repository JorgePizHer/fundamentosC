#include <stdio.h>
#include <string.h>

int main (int argc,char *argv[]){
    
    char* agenda[10][4];
    
    agenda[0][0] = "Jorge";
    agenda[0][1] = "Pizarro Hernandez";
    agenda[0][2] = "12345";
    agenda[0][3] = "jorge@mail.com";
    
    agenda[1][0] = "Juan";
    agenda[1][1] = "Lopez Garcia";
    agenda[1][2] = "34578";
    agenda[1][3] = "juan@mail.com";
    
    printf("El correo del segundo registro de la agenda es %s \n ", agenda[1][3]);
    
    
    return 0;
}


