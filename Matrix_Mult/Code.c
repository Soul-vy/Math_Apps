#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];
    int product,sum,i,j,t;

    printf("\nwrite M.A\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%i",&a[i][j]);
        }
    }
    printf("\nwrite M.B\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%i",&b[i][j]);
        }
    }
    for (t=0; t<3; t++)
    {
        for (i=0; i<3; i++)
        {
            sum=0,product=1;
            for (j=0; j<3; j++)
            {
                product=a[t][j]*b[j][i];
                sum+=product;
            }
            c[t][i]=sum;
        }
    }
    printf("\nM.A x M.B=C\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%i\t",c[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}
