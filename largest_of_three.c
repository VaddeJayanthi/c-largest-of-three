#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;

    if (b > largest)
        largest = b;

    if (c > largest)
        largest = c;

    printf("Largest = %d\n", largest);

    return 0;
}

OUTPUT:
Enter three numbers: 87
09
876
Largest = 876
