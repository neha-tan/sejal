#include<stdio.h>
//addition 2 matrix
void mat1(){

int r,c;
int a[100][100],b[100][100],sum[100][100],i,j;

printf("enter the number of row(1to100)");
scanf("%d",&r);
printf("enter the number of colunm(1to100)");
scanf("%d",&c);

printf("enetr first element of matrix \n");
for(i=0;i<r;i++){
   for(j=0;j<c;j++){
   printf("a%4d%4d: ",i+1,j+1);
   scanf("%d",&a[i][j]);
   }
}

printf("enetr second element of matrix\n");
for(i=0;i<r;i++){
   for(j=0;j<c;j++){
   printf("b%4d%4d: ",i+1,j+1);
   scanf("%d",&b[i][j]);
   }
}
for(i=0;i<r;i++){
   for(j=0;j<c;j++){
   
   sum[i][j]=a[i][j]+b[i][j];
   }
   printf("sum of 2 matrix \t: ");
   
}   
for(i=0;i<r;i++){
   for(j=0;j<c;j++){
   printf("%d",sum[i][j]); 
   }
   printf("\n");  
}
}
int main(){

  mat1();
}  




