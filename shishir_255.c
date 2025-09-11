#include<stdio.h>

int main()
{
    int n,i;
    char flag ='y';
    printf("Enter a no.\n");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n % i == 0)
        {
            flag='n';
            printf("%d is not a prim no.",n);
            break;

        }
    }
    if (flag=='y')
    printf("%d is a prime n.",n);


}
