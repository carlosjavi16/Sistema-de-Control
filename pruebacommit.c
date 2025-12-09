//Oliver Garcia C.I:32.396.121
//Luis Lira C.I.:31.564.286
// Fabiola Andrade C.I.:31.209.874
// Carlos Belmonte C.I:31.722.091
#include <stdio.h>
int main(){
int fortuna=0;

printf("\tADIVINA TU FORTUNA");
printf("\n\nIngresa un numero del 1 al 3 (0 para salir):");
do{

scanf("%d",&fortuna);

switch(fortuna){
case 0:
    printf("\n\nHasta luego!\n");
    break;
case 1:
    printf("\nSu fortuna sera aprender a usar switch y case\n");
    break;
case 2:
    printf("\nAlgo me dice que encontraras 100$ en la calle\n");
    break;
case 3:
    printf("\nHoy es un buen dia para culpar a un tercero. Si falla tu codigo, fue el sistema operativo.");
    break;
default:
    printf("\nSea serio ombe pon la vaina como eh!!\n");
    }

if(fortuna!=0){
    printf("\n\nOtro Numero (0 para salir):");
    }

}while(fortuna!=0);

return 0;
}
