#include <stdio.h>
#include <stdlib.h>

int main() {

     int resultado;

     int calificacion1;
     int calificacion2;
     int calificacion3;

     printf("Calificacion math: \n");
     scanf("%i", &calificacion1);

     printf("Calificacion lenguas: \n");
     scanf("%i", &calificacion2);

     printf("Calificacion historia: \n");
     scanf("%i", &calificacion3);

     resultado = (calificacion1 + calificacion2 + calificacion3)/ 3;
     printf("%i", resultado);

     if (resultado >= 70)
 {
     printf("\nAprobado");
 }
 else
 {
     printf("\nReprobado");
}

}


