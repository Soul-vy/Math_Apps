#include<stdio.h>

int main()
{
    //method 1
    int m;
    printf("method you want\n1 or 2\n");
    scanf("%i",&m);
    if (m==1)
    {
        float n,sqrt,temp;
        printf("Enter a number\n");
        scanf("%f",&n);
        temp=0;
        sqrt=n/2;
        while(sqrt!=temp)
        {
            temp=sqrt;
            sqrt=(n/sqrt+sqrt)/2;
        }
        printf("square root=%f\n",sqrt);
    }
    else
    {
        //method 2
        float x,y,z ;
        printf("Enter a number\n");
        scanf("%f",&z);
        x=z;
        y=1;
        while (x-y>0.0001)
        {   x=(x+y)/2 ;
            y=z/x ;
        }
        printf("%f",y);
    }

    return 0;
}
