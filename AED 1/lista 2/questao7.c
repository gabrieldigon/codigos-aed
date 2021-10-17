#include <stdio.h>
#include <math.h>

int main(){
    int i,r,s=0;
    
    for ( i = 0; i < 6; i++)
    {
        printf("seu numero esta na %d cartela?\n",i+1);
        scanf("%d",&r);
        if (r==1)
        {
            s= s+pow(2,i);
        }
        
        
    }
    
    printf("%d",s);
}
