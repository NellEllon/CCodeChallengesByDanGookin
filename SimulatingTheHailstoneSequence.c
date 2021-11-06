#include <stdio.h>

void hailstone(int n, int len)
{
    if(n<=1)
    {
        printf("%d\n", n);
        printf("Sequence length: %d",len);
    }
    else
    {
        printf("%d, ",n);
        (n%2==0)?hailstone(n/2, len+1):hailstone(n*3+1, len+1);
    }
}

int main()
{
    printf("Enter the starting value: ");
    int n;
    scanf("%d",&n);
    printf("Hailstone Sequence: ");
    hailstone(n, 1);
    return 0;
}
