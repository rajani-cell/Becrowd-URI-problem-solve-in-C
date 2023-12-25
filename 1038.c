#include <stdio.h>
 
int main() {
 
    int x,y;
    scanf("%d%d",&x,&y);
    
    if(x==1)
    {
    float ans=(float)y*4.00;
    printf("Total: R$ %.2f\n",ans);
    }
    
 
    else if(x==2)
    {
    float ans=(float)y*4.50;
    printf("Total: R$ %.2f\n",ans);
    }
    
    else if(x==3)
    {
    float ans=(float)y*5.00;
    printf("Total: R$ %.2f\n",ans);
    }
    
    else if(x==4)
    {
    float ans=(float)y*2.00;
    printf("Total: R$ %.2f\n",ans);
    }
    
    else
    {
    float ans=(float)y*1.50;
    printf("Total: R$ %.2f\n",ans); 
        
    }
    return 0;
}
