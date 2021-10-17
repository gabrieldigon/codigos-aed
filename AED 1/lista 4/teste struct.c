#include <stdio.h>

int main(){
    struct ficha
    {
        int mat;
        float nota;
    };
    struct ficha aluno;
    printf("Digite a matricula\n");
    scanf("%d",&aluno.mat);
    printf("Digite a nota\n");
    scanf("%f",&aluno.nota);

    printf("----Ficha Aluno----\n\n");
    printf("Matricula:%d\n",aluno.mat);
    printf("Nota:%.2f\n",aluno.nota);
    
    
    
}