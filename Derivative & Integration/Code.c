// Integration

#include<stdio.h>
int main()
{
    double i,y=0,acc=0.000001;
    int a,b,c,d,n1,n2;
    printf("integration of(a*X^3+b*X^2+c*X+d)\n");
    printf("what is (a,b,c,d)\n");
    scanf("%i%i%i%i",&a,&b,&c,&d);
    printf("\nfrom to n1 to n2\n");
    printf("what is (n1,n2)\n");
    scanf("%i%i",&n1,&n2);
    for (i=n1;i<=n2;i+=acc)
    y+=(a*i*i*i+b*i*i+c*i+d)*acc;
    printf("%0.5lf",y);
    return 0;
}

// Derivative 

#include<stdio.h>

int main()
{
    double h=0.00001,y,x;
    int a,b,c,d;
    printf("derivative (a*X^3+b*X^2+c*X+d)\n");
    printf("what is (a,b,c,d)\n");
    scanf("%i%i%i%i",&a,&b,&c,&d);
    printf("\nat what point the derivative\n");
    scanf("%lf",&x);
    y=((a*(x+h)(x+h)(x+h)+b*(x+h)(x+h)+c(x+h)+d)-(a*x*x*x+b*x*x+c*x+d))/h;
    printf("%0.5lf",y);
    return 0;
}


