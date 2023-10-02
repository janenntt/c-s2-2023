#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *temperatures = (double *)malloc(5 * sizeof(double)); // Initial allocation for up to 5 temperatures
    int size = 5;
    int count = 0;
    double temp;

    printf("Enter temperatures (type -100.0 to finish):\n");

    while (1) {
        scanf("%lf", &temp);

        if (temp == -100.0) {
            break; // Exit the loop when -100.0 is entered
        }

        temperatures[count] = temp;
        count++;

        // Check if the current array is full, and if so, double its size
        if (count == size) {
            size *= 2;
            double *new_temperatures = (double *)malloc(size * sizeof(double));

            if (new_temperatures == NULL) {
                printf("Memory allocation failed.\n");
                free(temperatures); // Free the previously allocated memory
                return 1; // Exit the program with an error code
            }

            // Copy the old values to the new array
            for (int i = 0; i < count; i++) {
                new_temperatures[i] = temperatures[i];
            }

            // Deallocate the old array
            free(temperatures);

            // Update the pointer to the new array
            temperatures = new_temperatures;
        }
    }

    printf("Temperatures in reverse order: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%.1f ", temperatures[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(temperatures);

    return 0;
}
