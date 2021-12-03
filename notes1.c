#include <stdio.h>

void denomination() 
{    
    int amount, notes;   

    
    int denom[10] = {2000, 500, 100, 50, 20, 10, 5, 1};

    printf("Enter amount: ");
    scanf("%d\n", &amount);

    for (int i=0; i<10; i++) 
    {
        notes = amount / denom[i];

        if (notes)
        {
            amount = amount % denom[i];

            printf(" %d = %d \n", notes, denom[i], 
                notes * denom[i]);
        }                
    }
}    
int main(){
 denomination();
  
}

