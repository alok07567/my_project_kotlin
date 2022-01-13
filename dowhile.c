#include<stdio.h>
int main(){
    int a,b;
    b=500;

    printf("Enter the vslue of a\n");
    scanf("%d",&a);

    printf("you have entered %d as the value of a\n",a);
    
    do{
        a=a*2+5;
        printf("%d\n",a);
    }while(a<b);
   
   return 0;
    
}