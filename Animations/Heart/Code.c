#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,t,l,size,len;
    int x=0;
    char name[100];
    len=strlen(name);
    printf("enter your name\n");
    gets(name);
    printf("enter size of the name ");
    scanf("%i",&size);
    for (i=1;i<=3;i++)
    {
    for (k=1;k<=4-i;k++)
    {
    printf(" ");
    }
    for (j=1;j<=4+2*i;j++)
    {
    printf("*");
    }
    for (l=1;l<=8-2*i;l++)
    {
    printf(" ");
    }
    for (t=1;t<=4+2*i;t++)
    {
    printf("*");
    }
    printf("\n");
    }
    if (size%2==1)
    x=1;
    for (i=1;i<=((24-size)/2)+x;i++)
    {
    printf("*");
    }
    printf("%s", name);
    for (i=1;i<=(24-size)/2;i++)
    {
    printf("*");
    }
    printf("\n");
    for (i=1;i<=12;i++)
    {
    for (k=1;k<=i;k++)
    {
    printf(" ");
    }
    for (j=1;j<=24-2*i;j++)
    {
    printf("*");
    }
    printf("\n");
    }
    return 0;
}
