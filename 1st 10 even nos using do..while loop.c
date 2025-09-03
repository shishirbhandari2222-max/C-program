#include<stdio.h>
int main()
{
    int i,count;
    i=2;
    count=0;
    printf("\nThe first 10 even number using do..while loop: ");
    do{
        printf("%d ",i);
        i+=2;
        count++;
    }while(count<10);
}
