#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int n;
    int d;

    printf("Digite um numero inteiro e positivo:");
    scanf("%d",&n);

    d = n%10;
    n = n/10;

    while (n>0){
        d = d + n%10;
        n = n/10;
    }
    printf("\n\n a soma dos algarismos do seu numero eh %d\n",d);

return 0;
}
