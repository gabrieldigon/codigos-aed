#include <stdio.h>
int main(){
    int hr,min,seg,t,e,i,it=0,t1,t2;
    for ( i = 0; ; i++)
    {

        printf("informe estado hr minuto e segundo");
        scanf("%d %d:%d:%d",&e,&hr,&min,&seg);

        if (e==2)
        {
            break;
        }
        t=(hr*3600)+(min*60)+seg;
       if (e==1)
       {
           t1=t;
       }
       if (e==0)
       {
           t2=t;
           if (t2-t1>it)
           {
               it=t2-t1;
           }
           
       }
       
       
        
    }
    printf("%d",it);

    
}