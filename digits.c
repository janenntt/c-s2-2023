#include <stdio.h>

int main(void){
    int x;
    printf("Enter a positive, three-digit integer: ");
    scanf("%d",&x);
    if(x>=100 && x<=999){
        int a = x%10;
        int b = (x/10)%10;
        int c = x/100;

        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
    } else {
        printf("Invalid input.");
    }
    return 0;
}