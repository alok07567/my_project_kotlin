#include<stdio.h>
int main()
{
    int a=6;
    int* ptra=&a;
    int arr[3]={4,7,9};

    //all values and pointers(addresses) of 'a'
    printf("value of a = %d\n",a);
    printf("value of a using & = %d\n",*&a);
    printf("value of a using ptra = %d\n",*ptra);
    printf("\n");
    printf("address of a(1) = %d\n",&a);
    printf("adress of a(2) = %d\n",ptra);
    printf("\n\n\n");

    //all values and pointers(addresses) of array
    for(int i=0;i<3;i++)
    {
        printf("value of %d element found normally is %d\n",i+1,arr[i]);
    }
    printf("\n");
    for(int l=0;l<3;l++)
    {
        printf("value of %d element using *(1) is %d\n",l+1,*(arr+l));
    }
    printf("\n");
    for(int  m=0;m<3;m++)
    {
        printf("value of %d element using * and & is %d\n",m+1,*&arr[m]);
    }
    printf("\n");
    for(int j=0;j<3;j++)
    {
        printf("address using '&' of element no. %d is %d\n",j+1,&arr[j]);
    }
    printf("\n");
    for(int k=0;k<3;k++)
    {
        printf("address using array of element no. %d is %d\n",k+1,arr+k);
    }
    printf("\n\n\n");

    //adress + something(a)
    printf("address of memory location  usiong & next to a is %d\n",&a+1);
    printf("address of memory location using pointer after 5 times of a is %d\n",ptra+5);
    printf("\n\n\n");
    
    //addresses + something (array)
    for(int c=0;c<3;c++)
    {
        printf("address using arr after 5 size of %d element is %d\n",c+1,(arr+c)+5);
    }
    printf("\n");
    for(int d=0;d<3;d++)
    {
        printf("address using & after 5 size of %d element is %d\n",d+1,&arr[d]+5);
    }
    printf("\n\n\n");
    printf("value of a+1 using * is %d\n",*ptra + 1);
    printf("value of a+1 using & is %d\n",*&a + 1);


    return 0;
}