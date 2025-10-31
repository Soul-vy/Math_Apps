#include<stdio.h>

int main()
{   //counting digits 
    int i,j,k,num,r,digit,f,L,z,sum,product;
    i=1;
    digit=1;
    printf("enter num\n");
    scanf("%i",&num);
    while (1)
    {
    r=num-10*digit;
    if (r<0)
    break;
    digit*=10;
    i++;
    }
    printf("\nnumber of digits: %i",i);
    k=i;
    //finding first and last digit
    for (j=0;j<=9;j++)
    {
    L=num-j;
    r=L;
    if (L%10==0)
    break;
    }
    for (i=1;i<=9;i++)
    {
    z=L;
    L=L-digit*i;
    if (L<0)
    break;
    r=L;
    L=z;
    }
    printf("\nfirst digit is: %i",i-1);
    printf("\nLast digit is: %i",j);
    //sum of first and last digit
    sum=i+j;
    printf("\nsum of first&Last digit: %i",sum-1);
    //swap last and first digit
    printf("\nnum: %i before swap",num);
    z=digit*j+(i-1)+r;
    printf("\nnum: %i after swap",z);
    // sum and product of digits
    z=L=1;
    sum=0;
    product=1;
    for (i=1;i<=k;i++)
    {
    for (j=0;j<=9;j++)
    {
    L=num-j*digit;
    if (L<0)
    break;
    z=L;
    }
    num=z;
    sum+=j-1;
    product*=(j-1);
    digit/=10;
    }
    printf("\nsum of digits=%i",sum);
    printf("\nproduct of digits=%i",product);
    
    return 0;
}
