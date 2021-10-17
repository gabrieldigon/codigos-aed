#include <stdio.h>
int main(){
    int cm,i,a,m,c,dc,maior,menor,maiorm,menorm,maiora,menora,menorc,maiorc;

    printf("digite o consumo medio:");
    scanf("%d",&cm);

    for ( i = 0; i < 6; i++)
    {
        printf("Digite a data e o consumo:");
        scanf("%d/%d %d",&a,&m,&c);
        dc=abs(c-cm);

        if (i==0)
        {
            maior=dc;
            menor=dc;
            maior=dc;
            maiorm=m;
            maiora=a;
            maiorc=c;
            menor=dc;
            menorm=m;
            menora=a;
            menorc=c;
            
        }
        if (i!=0)
        {
            if (dc>maior)
            {
                maior=dc;
                maiorm=m;
                maiora=a;
                maiorc=c;
                
            }
            
            
            if (dc<menor)
            {
                menor=dc;
                menorm=m;
                menora=a;
                menorc=c;
            }
            
            
            
            
        }

        
        printf("maior:%d\nmenor:%d\n",maior,menor);        
    }
    printf("%d/%02d %d\n",maiora,maiorm,maiorc);
    printf("%d/%02d %d",menora,menorm,menorc);
    
}