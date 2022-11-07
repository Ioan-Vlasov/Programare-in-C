#include <math.h>
#include <stdio.h>

int main()
{
    double diagonala1=0.0,diagonala2=0.0;
    printf("Diagonala 1 are lungimea:");
    scanf("%lf",&diagonala1);
    printf("Diagonala 2 are lungimea:");
    scanf("%lf",&diagonala2);
    printf("Rombul are aria:%lf\nRombul are perimetrul:%lf\n",diagonala1*diagonala2/2,2*sqrt(diagonala1*diagonala1+diagonala2*diagonala2));
    return 0;
}
