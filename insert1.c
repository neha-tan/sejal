#include<stdio.h>
void insert(){
	int a[50],size,i;
	printf("enter size of array");
	scanf("%d",& size);
	printf("enter elements of array ");
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]);

	}
    printf("elements in array are:");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
		}	
}
int main(){
 insert();
} 
