#include<stdio.h>  
  
void root()  
{  
    int num, temp, rem, sum = 0;  
  
    printf("Enter a number\n");  
    scanf("%d", &num);  
  
    temp = num;  
  
    do
    {  
        rem  = temp % 10;  
        sum  = sum + rem;  
        temp = temp / 10;  
         }while(temp > 0)  
         
        if(temp == 0)  
        {  
            if(sum > 9)  
            {  
                temp = sum;  
                sum  = 0;  
            }  
        }  
    }  
  
    printf("Generic Root of %d is %d\n", num, sum);  
}  
int main(){ 
 root();
} 
 
