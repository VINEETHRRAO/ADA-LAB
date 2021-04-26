
#include <stdio.h>
int gcd(int m,int n)
{if(n==0)
 return m;
 else
 gcd(n,(m%n));
}

int main()
{
    int m,n,g;
    printf("Enter the two numbers\n");
    scanf("%d",&m);
    scanf("%d",&n);
   g=gcd(m,n);
   printf("GCD of %d and %d is %d",m,n,g);

    return 0;
}
