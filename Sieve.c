#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numar=0,verificare=0,i,j,k=1;
    printf("Numarul dorit este:");
    verificare=scanf("%d",&numar);
    if(verificare==0)
    {
        printf("Nu ati introdus un numar intreg la tastatura\n");
    }
    else if (numar<2)
    {
        printf("Nu exista numere prime mai mici decat inputul oferit\n");
    }
    else
    {
        int* numere;
        numere=(int*)calloc(numar,sizeof(int));
        for(i=4;i<numar;i+=2)
            *(numere+i)=1;
        for(i=6;i<numar;i+=3)
            *(numere+i)=1;
        for (i=5;i*i<=numar;i=i+2+k*2)
        {
            if(*(numere+i)!=1)
                for(j=i+i;j<numar;j+=i)
                    *(numere+j)=1;
            k=k*(-1)+1;
        }
        printf("2,");
        for (i=3;i<numar;i+=2)
            if(*(numere+i)!=1)
                printf("%d,",i);
        printf("\n");
        free(numere);
    }
    return 0;
}
