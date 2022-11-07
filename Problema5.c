#include <stdio.h>

int main()
{
    int coins,intvalue=0,optiune;
    float value;
    printf("Valoare in RON sau in monede?\n1.RON\n2.Monede\nOptiunea aleasa:");
    scanf("%d",&optiune);
    if (optiune == 1)
    {
        printf("Valoarea in RON ce trebuie impartita in monede de 5,2,si 1 ban este:");
        scanf("%f",&value);
        value=value*100;
        intvalue=(int)value;
    }
    else
    {
        printf("Valoarea in Monede ce trebuie impartita in monede de 5,2,si 1 ban este:");
        scanf("%d",&intvalue);
    }
    coins=intvalue/5;
    coins+=(intvalue%5+1)/2;
    printf("Numarul minim de monede este:%d\n",coins);
}
