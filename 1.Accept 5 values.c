#include <stdio.h>
int main()
{
    int values[5];
    // Accept 5 values
    printf("Enter 5 integer values:\n");
    for (int i = 0; i <=4; i++) {
        scanf("%d", &values[i]);
    }
    // Print the values
    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
    return 0;

}
