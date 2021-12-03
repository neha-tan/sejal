#include<stdio.h>
//area and circumference
int aandc(int);
int aandc(int rad){
float circum,area,diameter;
circum=2*3.14*rad;
printf("circumferance = %.2f\n",circum);
area=3.14*rad*rad;
printf("area = %.2f\n",area);
diameter=2*rad;
printf("diameter = %.2f\n",diameter);
}
int main(){
int rad;

printf("enter radius  : ");
scanf("%d",&rad);
aandc(rad);

}
