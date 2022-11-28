#include<stdio.h>
#include<stdlib.h>
int verifica(register int ver,register int numar)
{
    if(ver==0)
    {
        printf("Nu ati introdus un numar intreg ca input\n");
        return 0;
    }
    else if (numar<2)
    {
        printf("Nu exista numere prime mai mici decat inputul oferit\n");
        return 0;
    }
    return 1;
}
void NotPrime(register int* numere,register int numar,register int i)
{
    for(register int j=i+i;j<numar;j+=i)
        *(numere+j)=1;
}
void PrintArray(register int* numere,register int numar)
{
    printf("2,");
    for (register int i=3;i<numar;i+=2)
            if(*(numere+i)!=1)
                printf("%d,",i);
    printf("\n");
}
int main()
{
    register int i,k=1;
    int verificare=0,num=0;
    printf("Numarul dorit este:");
    verificare=scanf("%d",&num);
    register int numar=num;
    if(verifica(verificare,numar))
    {
        register int* numere;
        numere=(int*)calloc(numar,sizeof(int));
        NotPrime(numere,numar,2);
        NotPrime(numere,numar,3);
        for (i=5;i*i<=numar;i=i+2+k*2)
        {
            if(*(numere+i)!=1)
                NotPrime(numere,numar,i);
            k=k*(-1)+1;
        }
        PrintArray(numere,numar);
        free(numere);
    }
    return 0;
}
