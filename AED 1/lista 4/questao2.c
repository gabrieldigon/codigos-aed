#include <stdio.h>

int main(){
    int i2,i, j, min, aux,n,aux2,c=0,c2=0;
    float a,mr=0;
    struct ficha
    {
        int mat;
        float nota;
    };
    struct ficha alunos[100];
    for ( i2 = 0; i2 < 100; i2++)
    {
        printf("Digite a matricula e a nota do aluno %d\n",i2+1);
        scanf("%d",&alunos[i2].mat); 
        if (alunos[i2].mat<0)
        {
            break;
        }
        scanf("%f",&alunos[i2].nota); 
        
    }
    n=i2;
    for ( i = 0; i < (n-1); i++)
    {
        min=i;
        for ( j = (i+1); j < n; j++)
        {
            if (alunos[j].nota<alunos[min].nota)
            {
		
                min=j;
            }
            if (alunos[i].nota != alunos[min].nota)
            {
                aux = alunos[i].nota;
                alunos[i].nota = alunos[min].nota;
                alunos[min].nota = aux;

                aux2 = alunos[i].mat;
                alunos[i].mat = alunos[min].mat;
                alunos[min].mat = aux2;

            }
            
            
        }
        
    }
    
    for ( i = 0; i < n; i++)
    {   c=0;
        for ( j = 0; j < n; j++)
        {
            if (alunos[i].nota == alunos[j].nota)
            {
                c++;
            }   
        }
        if (c>c2)
        {
            c2=c;
            mr=alunos[i].nota;
        }
           
        
    }
    if (c==1)
    {
        mr=0;
    }
    
    
 printf("Nota:  %.2f\n",mr/100);
 for ( i = 0; i < n; i++)
 {
     if (alunos[i].nota == mr)
     {
        printf("Matricula:  %d\n",alunos[i].mat);
     }
     
 }  
    
}