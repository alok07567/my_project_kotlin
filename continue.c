#include<stdio.h>
int main(){
    int age,a;
    for(a=3;a<20;a+=4){
        printf("enter your age\n");
        scanf("%d",&age);
      
    if(age>10)
    {break;} }
    //     continue;
    // }
    // else if(age>10){break;}
    printf("\nyour age is %d\n",age);
    
return 0;
}