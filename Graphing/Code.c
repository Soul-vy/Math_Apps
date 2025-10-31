#include<stdio.h>

int main()
{
    int i,j,k=0,t=0,a,b,c,d;
    printf("a*X^3+b*X^2+c*X+d\n");
    printf("what is (a,b,c,d)\n");
    scanf("%i%i%i%i",&a,&b,&c,&d);
    printf("flip the phone!!\n");
    for (i=-10; i<10; i++)
    {
        t=0;
        if (i==0)
        {
            printf("\n");
            for (k=0; k<21; k++)
                printf(". ");
        }
        else
        {
            printf("\n");
            for (j=-10; j<=(a*i*i*i+b*i*i+c*i+d)-1; j++)
            {
                if (j==0)
                    printf(".");
                else
                {    
                if (t>=42)
                    break;
                printf(" ");
                }
                t++;
            }
            if (t>=42)
                continue;
            if (t>0)
                printf("*");
            else
                printf(" ");
            for (; j<0; j++)
            {
                if ((j+1)==0)
                {
                    printf(".");
                    break;
                }
                printf(" ");
            }
        }
    }
    return 0;
}
