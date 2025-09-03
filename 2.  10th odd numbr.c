#include<stdio.h>
int main()
{         // 10 odd number
    int i,count;
    i=1;
    count=0;
    printf("\n The First 10 odd number using while loop: ");
    do
    {
        printf("%d ",i);
        i+=2;
        count++;
    }while(count<5);
}
