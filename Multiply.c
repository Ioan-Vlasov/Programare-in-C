#include <stdio.h>
#include <stdlib.h>
void citire(unsigned int n,unsigned int m,int *matrice)
{
    int i,j;
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            printf("Matrice[%u][%u]:",i,j);
            scanf("%d",(matrice+ i * m + j));
        }
}
void printare(unsigned int n,unsigned int m,int *matrice)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",*(matrice+ i * m + j));
        printf("\n");
    }
}
int* produs(unsigned int n,unsigned int m,unsigned int o,int *matrice1,int *matrice2)
{
    int i,j,k,sum;
    int *matriceFinala = (int *)malloc(n * o * sizeof(int));
    for (i=0;i<n;i++)
        for(j=0;j<o;j++)
            for (k=0;k<m;k++)
                *(matriceFinala +i*m +j)+=*(matrice1 +i*m +k) * *(matrice1 +k*m +j);
    return matriceFinala;
}
int main()
{
    int n,m,o;
    printf("Numarul de linii a primei matrici:");
    scanf("%u",&n);
    printf("Numarul de coloane a primei matrici/linii a matricii secunde:");
    scanf("%u",&m);
    printf("Numarul de coloane a matricii secunde:");
    scanf("%u",&o);
    int *matrice1 = (int *)malloc(n * m * sizeof(int));
    int *matrice2 = (int *)malloc(m * o * sizeof(int));
    citire(n,m,matrice1);
    citire(m,o,matrice2);
    int *matriceFinala = produs(n,m,o,matrice1,matrice2);
    printare(n,o,matriceFinala);
    free(matrice1);
    free(matrice2);
    free(matriceFinala);
    return 0;
}
/*
{
        sum=0;
        for (k=0;k<m;k++)
            sum+=*(matrice1 +i*m +k) + *(matrice1 +k*m +j);
        *(matriceFinal +i*m +j)=sum;
        }
*/

