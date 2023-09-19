#include <stdio.h>

int main(void){
    int x;
    printf("Enter a temperature in Celsius: ");
    scanf("%d", &x);
    printf("%d degrees Celsius is %d degrees in Fahrenheit.\n",x, x*9/5+32);
    return 0;
}