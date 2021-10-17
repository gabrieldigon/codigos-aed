#include <stdio.h>

int main(){
    int i,i2,vet[10],vet2[10],vets[20],a;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&vet[i]);
        vets[i]=vet[i];
    }
    printf("\n");

    for ( i = 10; i < 20; i++)
    {
        scanf("%d",&vet2[i]);
        vets[i]=vet2[i];

    }
    for ( i = 0; i < 20; i++)
    {
        printf("%d \t",vets[i]);
    }
    printf("\n\n\n");

   for ( i = 0; i < 20; i++)
   {
       for (i2 = 0; i2 < 20; i2++)
       {
       if (vets[i]<vets[i2])
        {
           a=vets[i];
           vets[i]=vets[i2];
           vets[i2]=a;
        }
       }   
   }
   
    for ( i = 0; i < 20; i++)
    {
        printf("%d ",vets[i]);
    }  
}