#include <stdio.h>

int main(){
    int i,cm,dcm=0,m,c,mc;
    printf("Digite o consumo medio");
    scanf("%d",&cm);

    for ( i = 1; i < 7; i++)
    {
        printf("digite o mes e o consumo do mes\n");
        scanf("%d %d",&m,&c);
        if ((c-cm)>dcm)
        {
            dcm=(c-cm);
            //printf("%d",dcm);
            mc=m;
        }

    }
    printf("%d",mc);

}