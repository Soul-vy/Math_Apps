#include<stdio.h>
int main ()
{
    int i,j,k;
    for (i=0; i<=25; i++)
    {
        if (i<=7)
        {
            for (j=0; j<=21-i; j++)
                printf(" ");
            for (k=0; k<=i; k++)
                printf("* ");
        }
        else if (i<=14)
        {
            for (j=0; j<=i-5; j++)
                printf(" ");
            for (k=0; k<=26-i; k++)
                printf("* ");
        }
        else
        {
            for (j=0; j<=9; j++)
                printf(" ");
            for (k=0; k<=20-i; k++)
                printf("* ");
            for (j=0; j<=4*i-59; j++)
                printf(" ");
            for (k=0; k<=20-i; k++)
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
