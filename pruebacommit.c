//Oliver Garcia C.I:32.396.121
//Luis Lira C.I.:31.564.286
// Fabiola Andrade C.I.:31.209.874
#include <stdio.h>
int main(){
int fortuna=0;

do{
printf("ADIVINA TU FORTUNA\n");
printf("\tSeleccione un numero\n");
scanf("%d",&fortuna);
switch(fortuna)
{
case 1:
    printf("Su fortuna es aprender a usar switch y case\n");
    break;
    case 2:
    printf("Su fortuna es econtrarse 100$ en la calle\n");
    break;
    case 3:
    printf("Su fortuna es que hoy es un buen dia para culpar a un tercero. Si falla tu codigo, fue el sistema operativo.");
    break;
default:
    printf("sea serio ombe pon la vaina como eh!!\n");
    }
}while(fortuna<1||fortuna>7);
return 0;
}
