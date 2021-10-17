#include <stdio.h>

int main(){
    int  i=0,t,maior,menor,i2,vet[i];
    float s=0,i3=0;
    double media=0;


    for ( i = 0; ; i++)
    {
      
       scanf("%d",&t);
       printf("\n");
       vet[i]=t;
       
       if (i==0)
       {
           maior=t;
           menor=t;
       }
       if (t>maior&&t!=500)
       {
           maior=t;
       }
       if (t<menor&&t!=500)
       {
           menor=t;
       }
       
       
       if (t==500)
       {
           i2=i;
           break;
       }
       
       
        
    }

   for ( i = 0; i < i2; i++)
   {
       
       if (vet[i]==maior||vet[i]==menor||vet[i]==500)
       {
           vet[i]=0;
       }
       s=s+vet[i];    
   }
    for ( i = 0; i < i2; i++)
    {
        if (vet[i]!=0)
        {
            i3++;
        }
        
    }
    media=s/i3;
    printf("a media e: %.1f",media);
    

}