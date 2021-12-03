 #include<stdio.h>
 void profitloss(int sp,int cp){
    if(sp > cp)  
    { 
        printf(" profit  %d\n", (sp-cp));  
    }  
    else if(cp > sp)  
    {  
        printf("Loss  %d\n", (cp-sp));  
    }  
    else  
    {  
        printf("profit not loss\n");  
    }
}      
int main()  
{  
    int cp, sp;  
  
    printf("Enter the cost price of the product\n");  
    scanf("%d", &cp);  
  
    printf("Enter the selling price of the product\n");  
    scanf("%d", &sp);    
  
    profitloss(sp,cp);
}  
