#include <stdio.h>
void citire(unsigned int n,unsigned int m,int matrice[50][50])
{
    int i,j;
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            printf("Matrice[%u][%u]:",i,j);
            scanf("%d",(*(matrice+i)+j));
        }
}
void printare(unsigned int n,unsigned int m,int matrice[50][50])
{
    int i,j;
    for(j=0;j<m;j++)
    {
        for (i=0;i<n;i++)
            printf("%d",*(*(matrice+i)+j));
        printf("\n");
    }
}
int main()
{
    unsigned int n,m;
    printf("Numarul de linii:");
    scanf("%u",&n);
    printf("Numarul de coloane:");
    scanf("%u",&m);
    int matrice[50][50];
    citire(n,m,matrice);
    printare(n,m,matrice);
    return 0;
}
