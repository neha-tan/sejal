#include<stdio.h>
int eligibility(int n){
  if(n>=18)
  printf("eligibility");
  else
  printf("not eligiblity");
  }
 int main(){
  int n;
  printf("enter your age we cheaq you eligibility or not");
  scanf("%d",&n);
  eligibility(n);
  }
