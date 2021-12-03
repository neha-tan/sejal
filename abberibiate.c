#include<stdio.h>

void name(char naam[20],char sname[20],char lname[20]){ 
     
     printf("abbrebiate name");
     printf("%c.%c.%s",naam[0],sname[0],lname[0]);
     
}
int main(){
 char naam[20],sname[20],lname[20];
  printf("enter first name,middle name,last name\n");
     scanf("%s%s%s",naam,sname,lname);
  
     name(naam,sname,lname);
}     
