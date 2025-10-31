#include<stdio.h>

int main()
{
    float a,b,c,x,y,z,im;
  printf("enter coff a,b,c\n");  
  scanf("%f\n%f\n%f",&a,&b,&c);
  x=-1.0;
  y=0.0;
  z=(b*b)-(4*a*c);
  if (b*b>4*a*c)
  {
  while (x!=y)
  {
  y=x;
  x=(z/x+x)/2;
  }
  y=(-b-x)/2*a;
  x=(-b+x)/2*a;
  printf("x1=%f,x2=%f\n",x,y);
  }
  else if (z==0)
  {
  x=-b/2*a;
  printf("x1=x2=%f",x);
  }
  else 
  {
  z=-z;
  while (x!=y)
  {
  y=x;
  x=(z/x+x)/2;
  }
  im=x/(2*a);
  x=-b/(2*a);
  printf("realx & imgx1=%f,%fi\n",x,im);
  printf("realx & imgx2=%f,-%fi\n\n",x,im);
  } 
  printf("if there two -- it will =(+)\n");
  printf("if there -0 it means 0 anyway\n");
  printf("it is under fixing\n");
  printf("sorry 🤗");
    return 0;
}
