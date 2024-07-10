#include <stdio.h>

const int max = 50;

void lectura(int [][max], int, int);
void suma(int[][max], int[][max], int[][max], int, int);
void imprime(int[][max], int, int);

void main(void)
{
int ma[max][max], mb[max][max], mc[max][max];
int fil, col;
do
{
    printf("Ingrese el numeri de filas de los arreglos: ");
    scanf("%d", &fil);
}
while(fil>max || fil<1);
do
{
    printf("Ingrese el numero de columnas de los arreglos: ");
    scanf("%d", &col);
}
while(col>max || col<1);
printf("\nLectura del Arreglo ma\n");
lectura(ma, fil, col);
printf("\nLectura del Arreglo mb\n");
lectura(mb, fil, col);
suma(ma, mb, mc, fil, col);
printf("\nImpresion del arreglo mc\n");
imprime(mc, fil, col);
}

void lectura(int a[][max], int f, int c)
{
int i, j;
for(i=0; i<f; i++)
    for(j=0; j<c; j++)
{
    printf("Ingrese el elemento %d %d: ", i+1, j+1);
    scanf("%d", &a[i][j]);
}
}

void suma(int m1[][max], int m2[][max], int m3[][max], int f, int c)
{
int i, j;
for(i=0; i<f; i++)
    for(j=0; j<c; j++)
        m3[i][j]= m1[i][j] + m2[i][j];
}

void imprime(int a[][max], int f, int c)
{
int i, j;
for(i=0; i<f; i++)
    for(j=0; j<c; j++)
        printf("\nElemento %d %d: %d ", i, j, a[i][j]);
}
