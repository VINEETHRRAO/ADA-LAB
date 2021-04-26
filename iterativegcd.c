
#include <stdio.h>
int gcd(int m,int n)
{int r;
  while(n!=0)
 { r=m%n;
   m=n;
   n=r;}
   return m;
    
}

int main()
{
    int m,n;
    printf("Enter the two numbers\n");
    scanf("%d",&m);
    scanf("%d",&n);
   g=gcd(m,n);
   printf("GCD of %d and %d is %d",m,n,g);

    return 0;
}