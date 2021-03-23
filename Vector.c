#include<stdio.h>
#include<string.h>
int vector(int vec[], int x)
{
    int i;
     for(i=0; i<x; i++)
     {
      printf("Introduce un número:  ");
      scanf("%d", &vec[i]);
     }
     printf("\nEL vector introducido es: ");
     for(i=0; i<x; i++)
     {
         printf("%d", vec[i]);
     }
     
}
int invertir(int vec[], int x)
{
     int i, aux, f;
     f=x/2;
        for(i=1;i<=x/2;i++)
        {
            aux = vec[i];
            vec[i] = vec[f];
            vec[f] = aux;
            f--;
        }
        /*for(i=x/2;i<x;i++)
        {
            aux = vec[i];
            vec[i] = vec[x-1];
            vec[x-1] = aux;
        }*/
}    
int mostrar(int vec[], int x)
{
    int i;
     printf("\n\nEl vector invertido es:  ");
     for(i=0; i<x; i++)
     {
        printf("%d", vec[i]); 
     }
     printf("\n\n");
}
int main()S
{
int vec[10];
int i, x, aux;
     printf("\nIntroduce tamaño del vector (de 2 a 10):  ");
     scanf("%d", &x);
     printf("\n");
     vector(vec, x);
     invertir(vec, x);
     mostrar(vec, x);
}
