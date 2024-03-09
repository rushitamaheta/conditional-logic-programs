#include <stdio.h>

int main() {
    float height;

    // Accepting height in centimeters
    printf("Enter the height in cm: ");
    scanf("%f", &height);

    // Categorizing the person based on height
    if (height < 0) {
        printf("Invalid height input.\n");
    } else if (height < 150) {
        printf("The person is Short.\n");
    } else if (height >= 150 && height < 165) {
        printf("The person is of Average height.\n");
    } else if (height >= 165 && height < 180) {
        printf("The person is Tall.\n");
    } else {
        printf("The person is Very Tall.\n");
    }


}

