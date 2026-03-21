#include <stdio.h>
#define COUNTRY "Sri Lanka"
int main() {
    const int age = 25;
    const float PI = 3.14;
    const char grade = 'A';
    printf("Age: %d\n", age);
    printf("PI: %.2f\n", PI);
    printf("Grade: %c\n", grade);
    printf("Country: %s\n", COUNTRY);
    return 0;
}