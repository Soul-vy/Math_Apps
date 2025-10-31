#include<stdio.h>

int main()
{
    int num[4];
    int a,b,c,i,temp;
    printf("enter 4 nums\n");
    for (i=0; i<4; i++)
    {
        printf("%i num=>\t",++i);
        i--;
        scanf("%i",&num[i]);
    }
    printf("\nall possible nums is...\n");
    for (a=0; a<4; a++)
    {
        for (b=0; b<3; b++)
        {
            for (c=0; c<1; c++)
            {
                printf("\n*\n");
                for (i=0; i<4; i++)
                {
                    printf("%i\n",num[i]);
                }
                temp=num[3];
                num[3]=num[2];
                num[2]=temp;
                printf("\n*\n");
                for (i=0; i<4; i++)
                {
                    printf("%i\n",num[i]);
                }
            }
            temp=num[2];
            num[2]=num[1];
            num[1]=temp;
        }
        temp=num[a+1];
        num[a+1]=num[0];
        num[0]=temp;
    }



    return 0;
}
