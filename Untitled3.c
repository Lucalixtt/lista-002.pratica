#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n;
    int a;
    int d;
    int p;
    float r;

    printf("Digite um numero inteiro e positivo:");
    scanf("%d",&a);

    n = a;
    d = n%10;
    n = n/10;
    p = 1;

    while (n>0){
        n = n/10;
        p++;
    }

    printf("p = %d\n",p);

    n = a;
    r = 0;

    while (n>0){
        d = n%10;
        r = r + pow(d,p);
        n=n/10;
    }

    printf("\n\n%.2f\n",r);

return 0;
}

