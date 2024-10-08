#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     double base, expoente, result;
    printf("DIGITE A BASE DA POTENCIACAO:");
    scanf("%lf", &base);
    printf("DIGITE O EXPOENTE DA POTENCIACAO:");
    scanf("%lf", &expoente);
    
    result=pow(base, expoente);
    
    printf("O RESULTADO DO NUMERO %.2lf ELEVADO A %.2lf E: %.2lf", base, expoente, result);

    return 0;
}
