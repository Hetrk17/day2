
#include <stdio.h>

int main()
{
    float marks;
    char grad;
    printf("Enter Average marks:- ");
    scanf("%f", &marks);
    if(marks>=35)
    {
        if(marks<=60)
        {
            grad = 'D';
        }
        else if(marks<=75)
        {
            grad = 'C';
        }
        else if(marks<=90)
        {
            grad = 'B';
        }
        else 
        {
            grad = 'A';
        }
    }
    else
    {
        grad = 'F';
    }
    
    if(grad == 'A' || grad =='B')
    {
        printf("Congraculation you have scored %c", grad);
    }
    else if(grad == 'C' || grad =='D')
    {
        printf("Good you have scored %c", grad);
    }
    else
    {
        printf("You have scored F. Better luck next time");
    }
    return 0;
}
