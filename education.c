#include <stdio.h>

int main(void){
    int x;
    printf("Enter the number of years you has spent in education so far: ");
    scanf("%d",&x);
    if(x<0){
        printf("Invalid input.");
    } else {
        if (x>=0&&x<=7){
            printf("Your level of educational attainment is primary level eduction.\n");
        } else if (x>=8&&x<=12) {
            printf("Your level of educational attainment is secondary level education.\n");
        } else {
            printf("Your level of educational attainment is tertiary level education.\n");
        }
    }
    return 0;
}