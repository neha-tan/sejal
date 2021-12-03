#include<stdio.h> 
void floatarray()              
{
	float a[100],n;
	int i,j,tmp;
	printf("Array size: ");
        scanf("%f",&n);
        printf("Elements: ");
        
      for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
	for ( i = 0; i < n; i++)                    
	{
		for (j = 0; j < n; j++)            
		{
			if (a[j] > a[i])             
			{
			        tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}  
		}
	}
	printf("\n\nAscending : ");                     
	for ( i = 0; i < n; i++)                     
	{
		printf(" %f ", a[i]);
	}
	for (i = 0; i < n; i++)                  
	{
		for (j = 0; j < n; j++)             
		{
			if (a[j] < a[i])                
			{
				tmp = a[i];        
				a[i] = a[j];            
				a[j] = tmp;             
			}
		}
	}
	printf("\n\nDescending : ");                    
	for ( i = 0; i < n; i++)                     
	{
		printf(" %f ", a[i]);                   
	}


}

int main(){
 floatarray();
} 

