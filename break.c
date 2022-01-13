#include<stdio.h>
int main(){
    int age,a;
    for(a=3;a<20;a+=4){
        printf("%d\nenter your age\t",a);
        scanf("%d",&age);
      /* if(age>10)
    { break; } */
    if(age>10)
    {
        continue;
    }
    printf("your age is %d",age);
    }
return 0;}