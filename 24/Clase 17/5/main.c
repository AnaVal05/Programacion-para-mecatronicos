#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
int main()
{
    int edad = 0;
    float PRO;
    printf("ingrese su edad: ");
    scanf("%d",&edad);
    if(edad>0)
    {
        if(edad < 6)
        {
            printf("eres un bebe");
        }
        else if (edad < 12)
        {
            printf("eres un nino");
        }
        else if(edad <18)
        {
            printf("Eres un adolescente o menor");
        }
        else if (edad<=60)
        {
            printf ("Eres un adulto") ;
        }
        else if(edad <121)
        {
            printf("Eres un anciano");
        }
        else
        {
            printf("Eres un vampiro");
        }

    }
    else
    {
        printf("Edad menor que cero");
    }


    return 0;
}





