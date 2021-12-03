 #include<stdio.h>
 void fibonica(int a,int b,int c,int num){
 a = -1;
 b = 1;
 while(num!=0){ 
 c = a + b;
 printf(" = %d \n",c);
 
 a = b;
 b = c;
 
 num--;
 }
} 
int main(){
int a,b,c,num;

 printf("enter number");
 scanf("%d",&num);
 
 fibonica(a,b,c,num);
}   
