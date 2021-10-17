#include <stdio.h>
int main (){
    int i,i2,vet[11],c=0;
    for ( i = 0; i < 11; i++)
    {
        scanf("%d",&vet[i]);
    }
    
    for ( i = 0; i < 11; i++)
    {
        for ( i2 = 0; i2 < 11; i2++)
        {
            if (vet[i]>vet[i2])
            {
                c++;
            } 
        }
        if (c==5)
        {
            printf("%d",vet[i]);
        }
        c=0;
    }
}