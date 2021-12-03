#include<stdio.h>
//area and circumference
int aandc(int);
int aandc(int rad){
float c,area;
c=2*3.14*rad;
printf("%.2f\n",c);
area=3.14*rad*rad;
printf("%.2f",area);
}
int main(){
int rad,x;

printf("enter radius");
scanf("%d",&rad);
aandc(rad);

}
