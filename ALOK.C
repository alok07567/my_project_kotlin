#include<stdio.h>
int main()
{
    int score;

    printf("The total score of the student is\n");
    scanf("%d", &score);
    
    printf("Your score is %d as per your entered value\n", score);

    if (score>30)
    {
        printf("Dear candidate, you are PASSED in the exam");
    }
   
    else if (score>=80)
    {
        printf("You have secured a good score, keep it up");
    }
    else if(score>=90)
{
    printf("Your future is bright, just work hard");
}
else
{
    printf("YOU ARE FAILED");
}

     
    return 0;
}
