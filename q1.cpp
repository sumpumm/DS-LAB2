#include <stdio.h>

int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
 
    int x1, x2;
    int gcd = gcdExtended(b%a, a, &x1, &x2);
    
	*x = x2 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
	int main(){
    int a,b,x=1, y=1;
    printf("Enter the value of a and b to find GCD:\n");
    scanf("%d %d", &a,&b);
    int g = gcdExtended(a, b, &x, &y);
    printf("gcd(%d, %d) = %d\n", a, b, g);
    printf("x = %d, y = %d",x,y);
    printf("\n%d * %d + %d * %d = %d",a,x,b,y,g);
    return 0;
}

