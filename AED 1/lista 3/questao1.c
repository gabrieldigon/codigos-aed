#include <stdio.h>
int main(){
    int i,t,m=0;
    scanf("%d",&t);
	 int vet[t];


    for ( i = 0; i < t; i++)
    {
        scanf("%d",&vet[i]);
        if (i==0)
        {
            m=vet[i];
        }
        
        if (vet[i]<=m)
        {
            m=vet[i];
        }
    }
   printf("Idade: %d\n",m);
   printf("Alun*(s): ");

   for ( i = 0; i < t; i++)
   {
       if (vet[i]==m)
       {
           printf("%d ",i+1);
       }    
   }
   
}