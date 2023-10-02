#include <stdio.h>
#include <stdlib.h> // for malloc

int main(void){
    int count;
    printf("Enter number of temperatures: "); // Ask for the number of temperatures to read
    scanf("%d",&count);

    // Dynamically allocate memory for the temperatures
    double *temperatures = (double *)malloc(count * sizeof(double));

    // Read the temperatures into the array
    printf("Enter %d temperatures:\n", count);
    for (int i = 0; i < count; i++) {
        scanf("%lf", &temperatures[i]);
    }

    // Print the temperatures in reverse order with 1 decimal point of precision
    for (int i = count - 1; i >= 0; i--) {
        printf("%.1f ", temperatures[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(temperatures);

    return 0;
}