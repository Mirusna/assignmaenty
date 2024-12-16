#include <stdio.h>
typedef union {
    int x;
    int y;
} test;
int main() {
    test t; 
    printf("Enter the value of x: ");
    scanf("%d", &t.x);
    printf("After making x = %d:\n", t.x);
    printf("x = %d\n", t.x);
    printf("y = %d\n", t.y);
    printf("Enter the value of y: ");
    scanf("%d", &t.y);
    printf("After making y = %d:\n", t.y);
    printf("x = %d\n", t.x);
    printf("y = %d\n", t.y);
    return 0;
}
