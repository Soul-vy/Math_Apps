#include<stdio.h>

int main()
{   int n,sum,to,f,i,j,k,p1,p2,count,bit,bits[32]= {0},word[30];
    printf("number to bits=>1 // bits to number=>0 \n");
    scanf("%i",&to);
    if (to)
    {
        printf("enter the number\n");
        scanf("%i",&n);
        k=n;
        while (1)
        {
            bit=1;
            count=0;
            while (1)
            {
                p1=n-bit;
                if (p1<0)
                    break;
                count++;
                bit*=2;
                p2=p1;
            }
            bits[32-count]=1;
            if (p2<=0)
                break;
            n=p2;
        }
        f++;
        for (i=0; i<32; i++)
        {
            if (f && bits[i]==0)
                continue;
            else
            {
                f=0;
                printf("%i",bits[i]);
            }
        }
        printf("\n%c",k);
    }
    else
    {
        printf("enter the bits\n");
        scanf("%i",&n);
        while (n>0)
        {
            bits[31-i]=n%10;
            n/=10;
            i++;
        }
        while (i>0)
        {
            bit=1;
            if (bits[31-i])
            {
                for (j=0; j<i; j++)
                    bit*=2;
                sum+=bit;
            }
            i--;
        }
        printf("%i\n%c",sum+bits[31],sum+bits[31]);
    }

    return 0;
}
