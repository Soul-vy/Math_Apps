// Slow Down it in Time
#include<stdio.h>

int main()
{
    int x=65,i,j;
    char a[2][5]= {{'H','E','L','L','O'},
                   {'W','O','R','L','D'}};
    int b[2][5];
    while (x!=88)
    {
        for (i=0; i<2; i++)
        {
            for (j=0; j<5; j++)
            {
                if (b[i][j]==1)
                {
                    printf("%c",a[i][j]);
                }
                else
                {
                    if (x==a[i][j])
                    {
                        b[i][j]=1;
                        printf("%c",x);
                    }
                    else
                    {
                        printf("%c",x);
                    }
                }
            }
            printf(" ");
        }
        printf("\n\n");
        x++;
    }
    return 0;
}
