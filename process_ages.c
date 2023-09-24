#include <stdio.h>

int main() {
    int ages[10];
    int count = 0;
    int age, sum = 0, max = -1, min = 151;

    printf("Enter up to 10 ages in years (-1 to finish):\n");

    while (count < 10) {
        printf("Enter an age: ");
        scanf("%d", &age);

        if (age == -1) {
            break;
        }

        if (age < 0 || age > 150) {
            printf("Please enter a valid age between 0 and 150.\n");
            continue;
        }

        ages[count] = age;
        sum += age;

        if (age > max) {
            max = age;
        }

        if (age < min) {
            min = age;
        }

        count++;
    }

    if (count == 0) {
        printf("No valid ages entered.\n");
    } else {
        float average = (float)sum / count;
        printf("%d %d %.1f\n", max, min, average);
    }

    return 0;
}
