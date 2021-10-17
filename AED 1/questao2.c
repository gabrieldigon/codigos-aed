#include <stdio.h>

int main(){

    int a,b,m,c,me,r;

    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        m=a;
        me=b;
        }
    else{
        m=b;
        me=a;
        }
    scanf("%d",&c);
    if (c>m)
    {
        r=m;
    }
    if (c<m && c>me)
    {
        r=c;
    }
    if (c<m && c<me)
    {
        r=me;
    }
    
    
    printf("%d",r);
};
   
 