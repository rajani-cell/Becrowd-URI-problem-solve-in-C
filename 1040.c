#include <stdio.h>
 
int main() 
{
    float n1,n2,n3,n4,n5;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    
    float sum=(n1*2)+(n2*3)+(n3*4)+(n4*1);
    float ave=sum/10;
    
    if(ave<5.0)
    {
        printf("Media: %.1f\n",ave);
        printf("Aluno reprovado.\n");

    }
    else if(ave>=5.0 && ave<=6.9)
    {
        printf("Media: %.1f\n",ave);
        printf("Aluno em exame.\n");
        
        scanf("%f",&n5);
        printf("Nota do exame: %.1f\n",n5);
         
        ave=(ave+n5)/2;
        if(ave>=5)
        {
            printf("Aluno aprovado.\n");
            
        }
        
        else if(ave<= 4.9)
        {
           printf("Aluno reprovado.\n") ;
        }
        
        printf("Media final: %.1f\n",ave); 
    }
    
    
    else
    {
        printf("Media: %.1f\n",ave);
        printf("Aluno aprovado.\n");
    }
    
   
 
    return 0;
}
