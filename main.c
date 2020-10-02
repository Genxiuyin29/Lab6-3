#include <stdio.h>

int main(void) {
  int num,i;
  loop:
  printf("Enter Number : ");
  scanf("%d",&num);

  if(num<0);
  else if((num==1 || num%2==0 || num%3==0 || num%5==0 || num%7==0) && (num!=2 && num!=3 && num!=5 && num!=7)){
    printf("Not prime number\n");
    printf("---------------------------------------------------\n\n");
    goto loop; 
  }else if(num>=0){
    for(i=1;i<=12;i++)
    printf("%d x %d = %d \n",num,i,num*i);
    printf("\n---------------------------------------------------\n\n");
    goto loop;
  }else{
      printf("Please enter number moer than ZERO !!!!!");
    }
  
  return 0;
}






